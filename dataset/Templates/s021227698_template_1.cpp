template<class T> class treap{
public:
 
    struct node{
        T val,sum,mini,maxi;
        node *left , *right;
        bool init;
        int pri;
        unsigned sz;
        node(){
            sum = 0;
            mini = INT_MAX;
            maxi = INT_MIN;
            sz = 1;
            init=true;
            pri=xor128();
            left = right = NULL;
        }