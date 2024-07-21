template<class T>
struct SkewHeap {

private:

  struct node{
    node *lch,*rch;
    T val;
    node(T val):val(val){ lch=rch=NULL; }