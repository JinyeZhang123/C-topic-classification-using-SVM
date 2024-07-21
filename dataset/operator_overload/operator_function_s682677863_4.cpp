bool operator<(const P& lp, const P& rp){
    return !(lp > rp) && !(lp == rp);
}