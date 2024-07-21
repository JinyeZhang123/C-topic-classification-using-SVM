template<typename T>
struct Fenwick {
    std::vector<T> data;
    Fenwick(int sz=1e5): data(sz+1, 0) {}