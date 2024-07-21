int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll t1, t2, a1, a2, b1, b2;
    cin >> t1 >> t2 >> a1 >> a2 >> b1 >> b2;
    ll p = (a1 - b1) * t1;
    ll q = (a2 - b2) * t2;
    if (p > 0) {
        p *= -1;
        q *= -1;
    }