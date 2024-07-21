template<class T> T diameter (const vector<vector<pair<int, T>>>& g) {
    auto fartest = [&] (int s) -> pair<int, long long> {
        int rv = s; T rd = 0;
        vector<bool> seen((int)g.size(), false);
        stack<pair<int, T>> sta;
        sta.emplace(rv, rd);
        while (!sta.empty()) {
            int v; T sd;
            tie(v, sd) = sta.top(); sta.pop();
            seen[v] = true;
            if (rd < sd) { rd = sd; rv = v; }