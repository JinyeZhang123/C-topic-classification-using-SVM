bool operator<(A a, A b) {
	if (a.cost != b.cost) return a.cost > b.cost;
	if (a.time != b.time) return a.time < b.time;
	return a.id > b.id;
}