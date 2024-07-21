template<typename Tp, typename Op>
class segtree{
    size_t length;
    Tp vid;
    Op fid;
    Tp (*action)(Op, Tp);
    Op (*composite)(Op, Op);
    Op *otree;
    Tp *value;

    void eval(size_t pos){
        if(otree[pos] == fid) return;        
        size_t ch = pos << 1;
        if(ch < length){
            otree[ch+0] = composite(otree[pos], otree[ch+0]);
            otree[ch+1] = composite(otree[pos], otree[ch+1]);
        }