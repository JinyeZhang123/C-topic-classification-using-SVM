int main() {
#ifdef HOME
    ifstream cin("A.in");
    ofstream cout("A.out");
#endif
    int i, n, k;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> k;

    //bkt(n, k, 0);



    set <int> a, b, c;
    for(i = 0; i < n; i++) {
        a.insert(k + i);
        b.insert(k + n + i);
        c.insert(k + 2 * n + i);
    }