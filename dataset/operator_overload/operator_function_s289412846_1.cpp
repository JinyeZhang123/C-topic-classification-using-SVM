position operator+(const position a,const position b){
    position res;
    res.x = a.x+b.x;
    res.y = a.y+b.y;
    return res;
}