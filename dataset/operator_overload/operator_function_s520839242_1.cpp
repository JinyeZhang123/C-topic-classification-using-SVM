bool operator<(const Team& t1, const Team& t2) {
        if (t1.solve_ != t2.solve_) {
            return t1.solve_ > t2.solve_;
        }