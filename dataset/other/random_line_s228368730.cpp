static inline void OUT(long x){if(x<0)putchar('-'),x=-x;if(x>=10)OUT(x/10);putchar(x%10+48);}
