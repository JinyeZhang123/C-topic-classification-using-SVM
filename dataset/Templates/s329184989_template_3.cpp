template<typename T> class BIT {
private:
    const long long n; vector<T> bit;
public:
    BIT(long long size) : n(size+1), bit(n, 0){}