template <class T_>
class rupdq{
public:
    i64 n;
    i64 h;
    T_ *lz;
    void make(i64 N){
        n=1;
        h=0;
        while(n<N){
            n*=2;
            h++;
        }