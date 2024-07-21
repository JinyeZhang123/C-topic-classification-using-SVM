template<typename T>
struct BIT{
    //1-index
    //0-indexで取ると無限ループする
    private:
    V<T> arr;
    int n;

    public:
    BIT(int siz){
        n=siz;
        arr.assign(n+1,0);
    }