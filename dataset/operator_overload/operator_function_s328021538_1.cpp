int operator[](int k) {
            return ((bit[k >> 5] >> (k & 0x1f)) & 1);
        }