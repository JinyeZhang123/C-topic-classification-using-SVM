template<typename T>
class LazyUpdateSegTree{
public:
    int n;
    T defaultValue;
    vector<T> dat;
    vector<T> lazy;
    vector<bool> isSetLazy;

    LazyUpdateSegTree(vector<T>& v, T defaultValue){
        n = 1;
        int vSize = (int)v.size();
        while(n < vSize){
            n *= 2;
        }