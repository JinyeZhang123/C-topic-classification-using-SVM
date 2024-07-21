int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n;
    cin >> n;
    bool ans = true;


    string s;
    cin >> s;


    map<string, int> m;

    m[s]++;

    char last = s.back();
    rep(i, n - 1) {

        string tmp;
        cin >> tmp;

        if(last != tmp[0])
            ans = false;
        if(m[tmp] != 0)
            ans = false;
        m[tmp]++;

        last = tmp.back();
    }