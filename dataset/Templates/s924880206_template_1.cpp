template<typename T>
vector<T> factor(T n) {
    vector<T> factorization;
    while (n%2==0) {
        factorization.push_back(2);
        n/= 2;
    }