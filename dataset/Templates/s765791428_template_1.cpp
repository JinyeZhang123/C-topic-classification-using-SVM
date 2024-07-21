template<typename T>
struct BIT{ //1-indexed
    vector<T> bit;
    int size;
    BIT(int n):size(n), bit(n+1, 0){}