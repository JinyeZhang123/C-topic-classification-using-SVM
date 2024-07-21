template <typename T>
struct BIT_tree{
    int n;  // 配列の要素数(数列の要素数+1)
    vector<T> bit; // データの格納先(1-indexed)。初期値は0
    BIT_tree(vector<T> v){
        n = v.size() + 1;
        bit.assign(n, 0);
        int i;
        for(i = 0;i < v.size();++i){
            add(i, v.at(i));
        }