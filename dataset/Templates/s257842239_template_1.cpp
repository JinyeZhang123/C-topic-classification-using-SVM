template<class T>
struct LeftistHeap {

private:

  struct node{
    node *lch,*rch;
    int s;
    T val;
    node(T val):val(val){ lch=rch=NULL; }