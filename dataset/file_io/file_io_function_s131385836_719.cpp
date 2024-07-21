int main() {
    //ifstream cin("input.in");
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d >> (s + 1);
    dodp(n, a, dpa);
    dodp(n, b, dpb);
    dodp(n, c, dpc);
    dodp(n, d, dpd);
    if (c < d)
        print(dpa[c] && dpb[d]);
    else {
        for (int i = b; i <= d; i++)
            if (dpb[i] && dpd[i] && dpa[i - 1] && dpc[i + 1]) {
                print(true);
                return 0;
            }