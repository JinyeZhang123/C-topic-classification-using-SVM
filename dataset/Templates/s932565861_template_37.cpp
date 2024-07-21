template <class T>
vector<int> argsort(vector<T>& seq, bool reverse = false) {
    int sz = (int)seq.size();
    vector<tuple<T, int>> seq2(sz);
    for (int i = 0; i < sz; i++) { seq2[i] = make_tuple(seq[i], i); }