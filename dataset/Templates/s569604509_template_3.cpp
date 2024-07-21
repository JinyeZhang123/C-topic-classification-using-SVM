template <class T>
class ssegment_tree {
   public:
    ll size;
    vector<T> data;
    T default_value;

    ssegment_tree(ll n, T default_value_) {
        default_value = default_value_;

        ll siz = 1;
        while (siz < n) {
            siz = siz * 2;
        }