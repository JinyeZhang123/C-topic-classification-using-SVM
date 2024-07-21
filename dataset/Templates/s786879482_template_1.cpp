template<typename T >
    vector<T> read_vector(function<T(string)> parse_func) {
        int n;
        cin >> n;

        vector<T> v;
        for (int i = 0; i < n; i++) {
            string in;
            cin >> in;
            v.push_back(parse_func(in));
        }