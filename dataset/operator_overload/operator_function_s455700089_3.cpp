bool operator<(square s1, square s2) {
	if(s1.s != s2.s) return s1.s > s2.s;
	if(s1.t != s2.t) return s1.t < s2.t;
	return s1.u > s2.u;
}