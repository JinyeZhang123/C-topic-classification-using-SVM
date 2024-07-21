template<typename T> T gcf(T a, T b) {return (b == 0) ? a : gcf(b, a%b);} 
