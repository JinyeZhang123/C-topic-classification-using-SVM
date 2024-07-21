template <typename T, typename E> struct SegmentTree {
    using F = function<T(T, T)>;
    using G = function<T(T, E)>;
    using H = function<E(E, E)>;
    using P = function<E(E, int)>;
    int n;
    // dat(蜃ｺ蜉�)縺ｮ繝槭�ｼ繧ｸ�ｼ域峩譁ｰ�ｼ�
    F f;
    // laz繧壇at縺ｫ蜿肴丐貍皮ｮ�
    G g;
    // laz(譖ｴ譁ｰ)縺ｮ繝代�ｼ繧ｸ�ｼ域峩譁ｰ�ｼ会ｼ井ｸ九↓莨晄眺�ｼ�
    H h;
    // laz繧壇at縺ｫ蜿肴丐貍皮ｮ�(縺ｾ縺ｨ繧�)
    P p;
    T e1;
    E e2;
    vector<T> dat;
    vector<E> laz;
    SegmentTree(int n_, F f, G g, H h, T e1, E e2, vector<T> v = vector<T>(),
                P p = [](E a, int b) { return a; }