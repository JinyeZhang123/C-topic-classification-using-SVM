template<typename T> int lcs(T s,T t){
    int lens=s.size();
    int lent=t.size();
    int dp[MAX_S+1][MAX_T+1]={}