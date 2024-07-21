template <typename T>
struct BIT_tree{

    public:
        BIT_tree(vector<T> v) : _n(v.size()), data(v.size(), 0){
            for(int i = 0;i < _n;++i){
                add(i, v[i]);
            }