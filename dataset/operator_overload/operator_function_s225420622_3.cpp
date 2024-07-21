ModfieldInt operator-(ModfieldInt a, ModfieldInt b) {
        return ModfieldInt((a.value - b.value + b.mod) % b.mod);
    }