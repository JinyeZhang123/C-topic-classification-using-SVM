int main() {
    //ifstream cin("A.in");
    //ofstream cout("A.out");
    int n, i, l;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> l >> n;
    int a = 0, b = 0;
    for(i = 1; i <= n; i++) {
        cin >> x[i];
        sp1[i] = sp1[i - 1] + x[i];
    }