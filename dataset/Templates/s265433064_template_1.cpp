template <typename T>
struct BIT {
    int n;
    vector<T> dat;

    BIT(int n) : n(n), dat(n + 1, 0) {}