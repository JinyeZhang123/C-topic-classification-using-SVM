template <class T>
vector<T> SET_2_VECTOR(set<T>& s) {
    vector<T> v;
    for (auto ele : s) { v.push_back(ele); }