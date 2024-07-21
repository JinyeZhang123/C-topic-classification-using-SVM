template <class Type>
Type solve(Type res = Type()) {
    int N;
    cin >> N;
    vector<string> S(N);
    for (auto& in : S) {
        cin >> in;
        reverse(in.begin(), in.end());
    }