bool operator<(const kek&x,const kek&y){
    forn(i,4){
        if(x.v[i]<y.v[i])return 1;
        if(x.v[i]>y.v[i])return 0;
    }