ModInt operator/(const ModInt l, const long long r) {
        return mul(l, inv(ModInt::get(r)));
    }