template<typename T>
struct segment_tree{
    function<T(T,T)> f = [](T a, T b){return min(a,b);}