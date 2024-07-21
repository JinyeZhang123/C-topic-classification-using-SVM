template <class T>
set<T> VECTOR_2_SET(vector<T>& v) {
    set<T> s;
    for (auto ele : v) { s.insert(ele); }