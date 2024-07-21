int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int a, b, k;
    cin >> a >> b >> k;

    for(int i = a; i <= b; i++) {
        if(i <= a + k - 1 || b - k + 1 <= i)
            cout << i << endl;
    }