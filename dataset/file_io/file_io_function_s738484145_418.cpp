int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    string s;
    cin >> s;
    ll sl = len(s);
    if (s[0] == s[sl - 1]) {
        if (sl % 2 == 1) printf("Second\n");
        else printf("First\n");
    }