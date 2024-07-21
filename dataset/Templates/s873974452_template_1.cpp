template <typename T>
int LongestIncreasingSubsequence(const vector<T>& a)
{
    const int n = a.size();
    vector<T> dp(n, INF<T>);
    for (int i = 0; i < n; i++) {
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
        //        *upper_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }