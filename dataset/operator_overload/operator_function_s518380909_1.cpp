bool operator<(const St& l, const St& r)
{ 
if( l.y == r.y ) 
{ 
    if( l.a == r.a ) return l.b < r.b;
    else return l.a < r.a;
}