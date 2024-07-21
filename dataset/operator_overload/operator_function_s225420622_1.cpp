ModfieldInt operator^(ModfieldInt val, long long power) {
        long long res = 1, cum = (val.value % val.mod);
        for (; power > 0; power >>= 1) {
            if (power & 1)
                res = (res * cum) % val.mod;
            cum = (cum * cum) % val.mod;
        }