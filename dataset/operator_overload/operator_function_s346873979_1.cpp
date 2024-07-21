modint operator++(int) {
            modint ret = *this;
            if (val != MOD - e())++val;
            else val = z();
            return ret;
        }