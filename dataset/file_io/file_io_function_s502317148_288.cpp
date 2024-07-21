int main () {
    //ifstream cin("input.in");
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        parity[a] ^= 1;
        parity[b] ^= 1;
    }