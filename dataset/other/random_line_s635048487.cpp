    M& operator+=(M r) { if ((v += r.v) >= mod) v -= mod; return *this; }
