template <typename T>
struct BIT {
    int n;
    vector<T> data;
    BIT(int n) : n(n + 1), data(n + 1, 0) {}