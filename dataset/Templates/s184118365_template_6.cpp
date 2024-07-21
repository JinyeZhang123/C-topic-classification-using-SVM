template <typename T>
struct BIT{
    ll N;
    vector<T> data;

    BIT(ll n){
        init(n);
    }