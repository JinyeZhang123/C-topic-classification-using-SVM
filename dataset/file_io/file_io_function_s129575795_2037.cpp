int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif
    int N = 100000;
    int n;
    cin >> n;

    vector<int> option;

    option.push_back(1);
    for(int i = 6; i <= N; i *= 6) {
        option.push_back(i);
    }