template<class T, int MAX_N>
struct FenwickTree { //0-indexed
    int N;
    T data[MAX_N];
    void init(int n) {
        N = n;
        memset(data, 0, sizeof(data));
    }