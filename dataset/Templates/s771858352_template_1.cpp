template <class T>
void get_unique(vector<T>& x) {
    x.erase(unique(x.begin(), x.end()), x.end());
}