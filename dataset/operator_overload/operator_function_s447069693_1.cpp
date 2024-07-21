T operator[](int k) {
        // st[i]で添字iの要素の値を返す
        if(k - n >= 0 || k < 0) {
            return -INF;
        }