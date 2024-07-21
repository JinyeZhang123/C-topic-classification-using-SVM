template<typename T>
class LazyAddSegTree{
public:
    int n;
    T defaultValue;
    vector<T> dat;
    vector<T> lazy;

    LazyAddSegTree(vector<T>& v, T value){
        n = 1;
        int vSize = (int)v.size();
        while(n < vSize){
            n *= 2;
        }