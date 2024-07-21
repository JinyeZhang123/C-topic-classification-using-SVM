int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    string s;
    cin >> s;
    int k;
    cin >> k;

    int l = 0;
    int r = 1;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') {
            l++;
        }