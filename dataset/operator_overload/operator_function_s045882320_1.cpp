T operator[](int k) {
        k += size;
        propagate(k);
        return lazy[k];
    }