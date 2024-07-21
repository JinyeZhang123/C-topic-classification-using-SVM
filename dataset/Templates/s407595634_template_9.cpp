template <class Type>
Type solve(Type res = Type()) {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto& in : S) cin >> in;

    map<char, int> one_alpha;
    using Item = pair<ull, char>;
    map<Item, map<char, int>> mp;

    for (int i = 0; i < N; i++) {
        if (S[i].length() == 1) {
            one_alpha[S[i][0]]++;
        }