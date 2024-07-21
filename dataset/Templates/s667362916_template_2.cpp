template <class Monoid>
struct LazySegment
{
    using Func = function<Monoid(Monoid, Monoid)>;
    vector<Monoid> node;
    vector<Monoid> lazy;
    vector<bool> lazyFlag;
    int n;
    Monoid ide;
    Monoid lazy_init;

    LazyOperator<Monoid> ope;

    LazySegment(const vector<Monoid> init, Monoid ide_, Monoid lazy_i,LazyOperator<Monoid> ope_) : ope(ope_)
    {
        n = 1;
        int sz = init.size();
        while (n < sz)
            n *= 2;

        node.resize(n * 2 - 1, ide);
        lazy.resize(n * 2 - 1, lazy_init);
        lazyFlag.resize(n * 2 - 1, false);

        for (int i = 0; i < sz; i++)
            node[i + n - 1] = init[i];
        for (int i = n - 2; i >= 0; i--)
            node[i] = ope.node_update(node[i * 2 + 1], node[i * 2 + 2]);
    }