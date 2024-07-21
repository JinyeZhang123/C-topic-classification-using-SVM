int main() {
    //fstream cin("A.in");
    //ofstream cout("A.out");
    int n, x, y, m, i;
    ios::sync_with_stdio(false);
    cin >> n >> m;
    int ans = n;
    for(i = 1; i <= n; i++) {
        cin >> val[i];
        fr[val[i]]++;
        if(val[i] - fr[val[i]] >= 0) {
            if(v[val[i] - fr[val[i]]] == 0)
                ans--;
            v[val[i] - fr[val[i]]]++;
        }