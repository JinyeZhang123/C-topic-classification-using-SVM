template<class T>
T gcd(T a,T b){
    a = abs(a);b = abs(b);
    if(a == 0)return b;
    else if(b == 0)return a;
    if(a < b)swap(a,b);
    if(a % b == 0)return b;
    else return gcd(b,a%b);
}