template <typename T>
void extgcd(T a, T b, T& x, T& y)
{
    if(b != 0){
        extgcd(b,a%b,y,x);
        y -= (a/b)*x;
    }