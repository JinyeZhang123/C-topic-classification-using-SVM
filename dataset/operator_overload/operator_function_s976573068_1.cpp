mindata operator+(const mindata &a,const mindata &b){
    if(a.v<b.v) return mindata(a.id,a.v);
    else return mindata(b.id,b.v);
}