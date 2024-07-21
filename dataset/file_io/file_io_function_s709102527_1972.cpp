int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int N, M, R;
    cin >> N >> M >> R;

    vector<vector<int>> d(N, vector<int>(N, 1000000000));

    vector<int> r(R);
    rep(i, R) {
        int tmp;
        cin >> tmp;
        r[i] = tmp - 1;
    }