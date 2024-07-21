ModInt operator-(const ModInt a) {
        ModInt res(*this);
        return res -= a;
    }