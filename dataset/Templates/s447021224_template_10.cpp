template <class f_type2> int max_right(f_type2 index_func, int l) {
        int pos = l + num;
        if (!index_func(tree[pos])) return l;
        S now = tree[pos];
        while (pos) {
            if (pos & 1) {
                if (!index_func(op(now, tree[pos + 1]))) {
                    pos++;
                    break;
                }