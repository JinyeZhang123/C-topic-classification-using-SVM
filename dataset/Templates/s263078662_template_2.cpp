template<typename T>
void vvprint(vector<vector<T>> vv) {
    REP(i, vv.size()) {
        REP(j, vv[i].size()) {
            cerr << vv[i][j] << " ";
        }