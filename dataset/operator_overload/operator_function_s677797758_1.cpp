bool operator<(const block& b) {
        return w + s < b.w + b.s;
    }