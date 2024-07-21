template <typename T>
struct BIT {
    int n;             // 要素数
    T MOD;
    vector<T> bit[2];  // データの格納先
    BIT(int n_, T MOD_) { 
        init(n_); 
        MOD = MOD_;
    }