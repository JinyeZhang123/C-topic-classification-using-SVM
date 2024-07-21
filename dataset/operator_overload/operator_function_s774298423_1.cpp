bool operator<(const P &a, const P&b ) {
    return a.num!=b.num?a.num>b.num:a.penalty!=b.penalty?a.penalty<b.penalty:
        a.id<b.id;
}