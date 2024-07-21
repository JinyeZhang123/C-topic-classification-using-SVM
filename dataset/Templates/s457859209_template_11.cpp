template<typename T>
T ngcd(vector<T> a){
    T res;
    res = a[0];
    for(int i = 1; i < a.size() && res != 1; i++) {
        res = gcd(a[i], res);
    }