template <class T>
struct Union_find {
    vector<T> parent;
    vector<T> rank;
    vector<T> size_of;

    Union_find(T n) : parent(n), rank(n), size_of(n) {
        for (T i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
            size_of[i] = 1;
        }