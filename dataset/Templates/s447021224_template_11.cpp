template <class f_type2> int min_left(f_type2 index_func, int r) {
        int pos = r + num - 1;
        if (!index_func(tree[pos])) return r;
        S now = tree[pos];
        while (pos) {
            if (!(pos & 1)) {
                if (!index_func(op(now, tree[pos - 1]))) {
                    pos--;
                    break;
                }