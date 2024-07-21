ModfieldInt operator*(ModfieldInt a, ModfieldInt b) {
        return ModfieldInt((a.value * b.value) % a.mod);
    }