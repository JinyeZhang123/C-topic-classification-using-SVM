int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif
    int d, n;
    cin >> d >> n;

    if(d == 0) {
        if(n == 100)
            cout << "101";
        else
            cout << 1 * n;

    }