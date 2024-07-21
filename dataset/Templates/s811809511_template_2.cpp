template<typename T>
T lcm(T a,T b)
{
   T g=gcd<T>(a,b);
   return (a*b)/g;
}