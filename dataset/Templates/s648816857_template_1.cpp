template <typename T>
struct PrimeFact {
    vector<T> spf;
    PrimeFact(T N) { init(N); }