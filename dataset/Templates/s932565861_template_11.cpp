template <class T>
vector<T> SLICE(vector<T>& v, int first, int last, int step) {
    int n = (int)v.size(), now = first;
    vector<T> ret;
    if (first < 0 || n <= last) { return {}