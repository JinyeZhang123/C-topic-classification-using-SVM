template <typename T>
struct zeroIndexedBIT{
private:
    vector<T> array;
    int n;

public:
    // ????????? (??????)
    zeroIndexedBIT() : array(10, 0), n(10) {}