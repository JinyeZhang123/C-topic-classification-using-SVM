template<class T>
struct SegmentTree {
private:
    int n;
    vector<T> node;
    T def;
    function<T(T,T)> lop;
    function<T(T,T)> out;
    
public:
    SegmentTree() {}