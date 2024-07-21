int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int x;
    cin >> x;

    int ans = 0;
    repi(i, 1, 40) {
        repi(j, 2, 40) {
            int tmp = pow(i, j);
            if(tmp <= x)
                chmax(ans, tmp);
        }