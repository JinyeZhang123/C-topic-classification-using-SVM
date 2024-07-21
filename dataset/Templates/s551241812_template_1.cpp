template <class T>
struct segment_tree_min
{
    #define chl (k<<1)
    #define chr (k<<1|1)
    #define mid ((l+r)>>1)
    T *t,*tag;
    int n;

    segment_tree_min(int n) {t=new T[n<<2](); tag=new T[n<<2](); this->n=n;}