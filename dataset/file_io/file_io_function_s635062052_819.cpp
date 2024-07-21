int main() {

#ifdef DEV
    std::ifstream in("AtCoder/ABC162/RGB Triplets.input");
    cin.rdbuf(in.rdbuf());

    int t; cin >> t;
    for (int x = 1; x <= t; ++x) {
        solve();
    }