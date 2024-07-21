template <class T>
void print2dVector(const vector<T> &vv) {
    for (const auto &v : vv) {
        for (const auto &e : v) {
            cout << e << " ";
        }