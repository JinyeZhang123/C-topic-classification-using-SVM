template<typename T> T gcd(T a, T b){ return (a % b)? gcd(b, a%b) : b; }
