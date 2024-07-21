position operator-(const position a,const position b){
    position d;
    d.x = -b.x;
    d.y = -b.y;
    return a+d;
}