Int operator[](int i) {
        i += N;
        Int ans = 0;
        while (i > 0) {
            ans += data[i];
            i /= 2;
        }