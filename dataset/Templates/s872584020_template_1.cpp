template <typename T>
struct BIT{
private:
    vector<T> array;
    const int n;

public:
    // ?????????
    BIT(int _n) : array(_n + 1, 0), n(_n) {}