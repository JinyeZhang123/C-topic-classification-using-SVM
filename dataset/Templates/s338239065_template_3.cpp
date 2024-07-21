template <typename T>
struct RMQ {
    const T e = 0;
    function<T(T, T)> fx = [](T x1, T x2) -> T { return max(x1, x2); }