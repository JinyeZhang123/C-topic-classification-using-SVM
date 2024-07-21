template<typename Gtype>
void Joint(Gtype& g, vector<int>& joints, int st = 0) {
	vector<int> lowlink, orb;
	DGraph dfsg(g.vn);
	Lowlink(g, lowlink, dfsg, orb, st);

	REP(i, dfsg.vn) {
		if (st == i) continue;
		if (orb[i] == INT_MAX) continue;
		for (auto itr : dfsg.g[i]) {
			if (orb[itr.first] == INT_MAX) continue;
			if (orb[i] > orb[itr.first]) continue;

			if (orb[i] <= lowlink[itr.first]) {
				joints.push_back(i);
				break;
			}