template <class T, class M>
class LazySegmentTree {
  private:
    int n = 1;
    vector<T> segtree;
    vector<T> lazy;
    function<T(T, T)> operation;
    function<M(M, M)> action_to_action;
    function<T(T, M)> action;
    T t_ie;
    M m_ie;

    void eval(int k) {
        if (lazy[k] == m_ie)
            return;
        if (k < n - 1) {
            lazy[2 * k + 1] = action_to_action(lazy[2 * k + 1], lazy[k]);
            lazy[2 * k + 2] = action_to_action(lazy[2 * k + 2], lazy[k]);
        }