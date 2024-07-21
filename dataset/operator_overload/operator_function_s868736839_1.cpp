bool operator<(const dijk &l, const dijk &r){
    if(l.dis != r.dis)return l.dis > r.dis;
    return l.p < r.p;
}