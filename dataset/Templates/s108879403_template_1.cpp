template <class T, T (*op1)(T, T), T (*e1)(), // Monoid T
          class U, U (*op2)(U, U), U (*e2)(), // Monoid U
          T (*action)(T, U)>                  // Action b/w T - U

class LazySegmentTree {
    
private:
    vector<T> node;
    vector<U> lazy;
    int n, h;
    
    void eval(int k) {
        if(lazy[k] == e2()) return; // Propagated
        
        if(k < n) { //not reached bottom of tree
            lazy[(k << 1)|0] = op2(lazy[(k << 1)|0], lazy[k]);
            lazy[(k << 1)|1] = op2(lazy[(k << 1)|1], lazy[k]);
        }