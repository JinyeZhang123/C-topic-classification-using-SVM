bool operator<(const node &a,const node &b){
    if (a.fi==b.fi)return a.sc<b.sc;
    return a.fi<b.fi;
}