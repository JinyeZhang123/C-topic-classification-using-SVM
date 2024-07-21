bool operator<(const position a,const position b){
    return a.x<b.x||(a.x==b.x&&a.y<b.y);
}