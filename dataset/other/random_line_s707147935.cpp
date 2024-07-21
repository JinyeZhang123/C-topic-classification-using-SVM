	segtree(int n, T e, const Func &updater = Func()) :obj(bufsize(n), e), e(e), updater(updater) {}
