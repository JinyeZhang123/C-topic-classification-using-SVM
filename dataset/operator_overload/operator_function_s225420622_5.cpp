ModfieldInt operator/(ModfieldInt a, ModfieldInt b) {
        return a * (b ^ (b.mod - 2));
    }