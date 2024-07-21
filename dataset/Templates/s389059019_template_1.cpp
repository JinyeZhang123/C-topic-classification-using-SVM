template<class T>
struct treap{
    #define treapInf INT_MAX

public:
    struct node{
        T val;
        node *lch,*rch;
        int pri,sz;
        T sum,mini;

        node(T val,int pri):val(val),pri(pri),sz(1),sum(val),mini(val){
            lch=rch=NULL;
        }