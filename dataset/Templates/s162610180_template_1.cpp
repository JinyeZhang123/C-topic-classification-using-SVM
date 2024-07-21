template<class T>
T lis(const T& vec) {
    const int N = vec.size(), INF = 1<<30;
    T dp(N, INF), id(N);
    for (int i = 0; i < N; ++i) {
        id[i] = std::distance(dp.begin(), std::lower_bound(dp.begin(), dp.end(), vec[i]));
        dp[id[i]] = vec[i];
    }