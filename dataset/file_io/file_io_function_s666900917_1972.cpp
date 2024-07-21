int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    vector<int> x(3);
    cin >> x[0] >> x[1] >> x[2];
    sort(x.begin(), x.end());

    int ans = 0;
    ans += x[2] - x[1];

    int tmp = x[2] - ans - x[0];
    if(tmp % 2) {
        ans += tmp / 2 + 2;
    }