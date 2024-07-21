template <typename T>
T add_self(T& a, T b, T modulus){ a+=b; if(a>=modulus){ a-=modulus; }