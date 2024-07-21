bool operator<(const Elem &a, const Elem &b) {
    if(a.solved != b.solved) return a.solved > b.solved;
    if(a.tm != b.tm) return a.tm < b.tm;
    return a.team > b.team;
}