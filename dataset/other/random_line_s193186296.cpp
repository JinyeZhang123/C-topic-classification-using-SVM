	return Get(id<<1, tl, mid, l, r) + Get(id<<1 | 1, mid, tr, l, r);
