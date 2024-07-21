bool operator<(wall& a, wall& b) {
        return a.r < b.r || (a.r == b.r && a.c < b.c);
    }