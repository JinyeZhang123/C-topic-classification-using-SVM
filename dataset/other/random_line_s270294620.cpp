	else return std::min(query(x << 1, l, mid, L, mid), query(x << 1 | 1, mid + 1, r, mid + 1, R));
