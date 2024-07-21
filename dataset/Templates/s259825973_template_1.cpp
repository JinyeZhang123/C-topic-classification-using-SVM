template<class E, class T> struct Rerooting {
    using F = function<T(T, T)>;
    using H = function<T(T, E)>;
private : 
    struct Edge {
        int to;
        E data;
        T dp, sum;
        Edge (int to, E data, T dp, T sum) : 
            to(to), data(data), dp(dp), sum(sum) { }