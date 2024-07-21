bool operator<(const Cake& l, const Cake& r) {
	return l.w * l.d < r.w * r.d;
}