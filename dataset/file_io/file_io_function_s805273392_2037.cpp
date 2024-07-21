int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int ans = 0;
    string s;
    cin >> s;
    for(auto e : s) {
        if(e == '+')
            ans++;
        else
            ans--;
    }