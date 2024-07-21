int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    string S;
    cin >> S;
    int n = S.size();

    map<char, int> mp;
    for (auto c: S){ mp[c]++; }