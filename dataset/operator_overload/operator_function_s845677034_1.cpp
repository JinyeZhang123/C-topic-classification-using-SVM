bool operator<(P a, P b) {
	if (a.x < b.x) return true;
	else if (a.x > b.x) return false;
	else {
		if (a.y < b.y) return true;
		else return false;
	}