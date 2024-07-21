int main() {
#if 0
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int n, k, i;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    string str;
    cin >> n >> k >> str;
    k = min(k, 15);

    string ans = str;
    str += string(str.rbegin(), str.rend());

    for(i = 0; i <= n; i++) {
        string cur = str.substr(i, n);
        if(k > 1) {
            int j = n - 1;
            while(cur[j] == cur[n - 1]) {
                j--;
            }