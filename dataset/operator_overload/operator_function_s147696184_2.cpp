bool operator==(const Poly &p) {
        if (n != p.n) return false;
        for (int i=0; i<n; ++i) {
            if (dx[i] != p.dx[i] || dy[i] != p.dy[i]) return false;
        }