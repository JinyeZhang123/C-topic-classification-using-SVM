data operator+(const data& l, const data& r) {
	if (l.minA == -1) return r;
	if (r.minB == -1) return l;
	data res;
	res.minA = (l.getMinA() <= r.getMinA()) ? l.minA : r.minA;
	res.minB = (l.getMinB() < r.getMinB()) ? l.minB : r.minB;
	res.bestPair = (l.getDiff() < r.getDiff()) ? l.bestPair : r.bestPair;
	if (res.getDiff() > b[r.minB] + a[l.minA]) res.bestPair = make_pair(l.minA, r.minB);
	return res;
}