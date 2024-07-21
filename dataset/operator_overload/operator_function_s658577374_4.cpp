bool operator<(const point &a,const point &b) {
    return a.x==b.x?a.y<b.y:a.x<b.x;
}