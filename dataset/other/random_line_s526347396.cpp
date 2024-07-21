	return max(Query(x << 1, l, mid, ql, mid), Query(x << 1 | 1, mid + 1, r, mid + 1, qr)) + t[x];
