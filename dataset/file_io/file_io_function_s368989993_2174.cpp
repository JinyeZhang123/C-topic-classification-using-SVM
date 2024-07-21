int main (int argc, char *argv[]) {
    cin.tie(0); 
    ios::sync_with_stdio(false);
    // for file input
    /* ifstream in("input.txt");
    ifstream in("input.txt"); */

    int n;
    cin >> n;
    llong k;
    cin >> k;
    vector<llong> A(n);
    rep(i, n) cin >> A[i];

    vector<llong> cumA(n + 1);
    cumA[0] = 0;
    rep(i, n) cumA[i + 1] = cumA[i] + A[i] - k;
    
    vector<llong> zaatsu = cumA;
    sort(all(zaatsu));
    zaatsu.erase(unique(all(zaatsu)), zaatsu.end());

    BinaryIndexTree<llong> BIT(n + 10);
    llong ans = 0;
    rep(i, n + 1) {
        int idx = lower_bound(all(zaatsu), cumA[i]) - zaatsu.begin();
        ans += BIT.sum(1, idx + 2);
        BIT.add(idx + 1, idx + 2, 1);
    }