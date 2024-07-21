template<class V, int ME> class BIT {
public:
    V bit[1<<ME];
    V total(int e) {V s=0;e++;while(e) s+=bit[e-1],e-=e&-e; return s;}