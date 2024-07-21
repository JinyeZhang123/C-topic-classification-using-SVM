template <typename T>
T euler_phi_function(T n){
    vector<pair<T, T>> a;
    T counter, p;
    T m = sqrt(n) + 1;
    p = n;
    for (T i = 2; i <= m; i++)
    {
        counter = 0;
        while (n % i == 0)
        {
            counter++;
            n /= i;
        }