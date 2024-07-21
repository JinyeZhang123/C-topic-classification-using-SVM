template <class RandomIt>
size_t lcsubsequence(
    RandomIt first1, RandomIt last1, RandomIt first2, RandomIt last2
) {
    vector<vector<size_t>> dp(last1-first1+1, vector<size_t>(last2-first2+1));
    for (RandomIt it=first1; it<last1; ++it)
        for (RandomIt it2=first2; it2<last2; ++it2) {
            if (*it == *it2) {
                dp[it-first1+1][it2-first2+1] = dp[it-first1][it2-first2] + 1;
            }