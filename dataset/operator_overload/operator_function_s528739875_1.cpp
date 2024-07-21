bool operator<(const data& d1, const data& d2){
    if(d1.y == d2.y){
        if(d1.m == d2.m){
            return d1.d < d2.d;
        }