modint operator--(int) {
            modint ret = *this;
            if (val != z())--val;
            else val = MOD - e();
            return ret;
        }