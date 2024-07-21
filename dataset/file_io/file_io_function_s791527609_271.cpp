int main() {
   // ifstream cin("data.in");
    int n, start;
    cin >> n >> start;
    vector<int>val(n);
    for(int i = 0; i < n; i++)
        cin >> val[i];

    sort(val.begin(), val.end(), greater<int>());
    vector<int>prob(start + 1), nprob(start + 1);

    prob[start] = 1;
    for(int i = 0; i < n; ++i) {
        nprob = vector<int>(start + 1);
        int y = val[i];
        int take = lgp(n - i, MOD - 2);
        int not_take = (1 - take+MOD) % MOD;
        for(int x = 0; x <= start; x++) {
            nprob[x] = (nprob[x] + 1LL * not_take * prob[x]) % MOD;
            nprob[x % y] = (nprob[x % y] + 1LL * take * prob[x]) % MOD;
        }