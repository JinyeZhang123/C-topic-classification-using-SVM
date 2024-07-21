bool operator<=(num a, num b) {
    int x = min(a.s, b.s);
    a.s -= x;
    b.s -= x;
    if (a.s == 0) {
        while (a.x > b.x && b.s > 0) {
            --b.s;
            b.x *= 4;
        }