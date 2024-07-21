template<class T>
struct Treap {

public:

  struct node_t{
    T val;
    node_t *lch,*rch;
    int pri,cnt,mini,sum;
    
    node_t(int v,double p):val(v),pri(p),cnt(1),mini(v),sum(v){
      lch=rch=NULL;
    }