template <class T>
class SegmentTree {
  private:
    int n = 1;
    vector<T> segtree;
    function<T(T, T)> operation;
    T ie;

    T _query(int a, int b, int k, int l, int r) {
        if (a >= r || b <= l)
            return ie;
        else if (a <= l && b >= r)
            return segtree[k];
        else {
            int vl = _query(a, b, 2 * k + 1, l, (l + r) / 2);
            int vr = _query(a, b, 2 * k + 2, (l + r) / 2, r);
            return operation(vl, vr);
        }