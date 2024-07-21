template <typename T>
struct BIT{
    int n;
    vector<T> d;

    BIT(int sz){
        n = sz+10;
        d.resize(n);
    }