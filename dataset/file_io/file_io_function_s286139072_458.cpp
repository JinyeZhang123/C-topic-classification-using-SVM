int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    string s;
    int x, y;
    cin >> s >> x >> y;
    int sl = s.length();
    int fcnt = 0, tcnt = 0, ftmp = 0;
    vector<int> f;
    set<pair<int, int>> pos;
    set<int> xpos, ypos;
    bool xfind = false, yfind = false, ans = false;
    rep(i, sl) {
        if (s[i] == 'F') {
            fcnt++;
            ftmp++;
            if (i == (sl - 1)) f.push_back(ftmp);
        }