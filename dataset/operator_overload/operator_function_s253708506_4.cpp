bool operator<(H a, H b) {
	/*if (a.x != b.x) return a.x < b.x;
	return a.y < b.y;*/
	return ((a.x + 1)*(a.y + 1)) < ((b.x + 1)*(b.y + 1));
}