int main() {
    //ifstream cin("A.in");
    //ofstream cout("A.out");
    int i, j, n, m;
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(i = 0; i <= n; i++) {
        dp[0][i][(i == 0)] = 1;
    }