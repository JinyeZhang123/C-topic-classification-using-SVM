template<class T>
class sg_tree : public vector<T>{
private:
    lli n;
    T default_value;
    void _query(lli a,lli b,T x,lli k,lli l,lli r){
        if(r <= a || b <= l) return;
        if(a <= l && r <= b) (*this)[k] = x;
        else {
            _query(a,b,x,k*2+1,l,(l+r)/2);
            _query(a,b,x,k*2+2,(l+r)/2,r);
            return;
        }