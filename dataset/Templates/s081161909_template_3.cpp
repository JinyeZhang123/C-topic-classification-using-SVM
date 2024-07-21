template<typename Gtype>
void Bridge(Gtype& g, vector<pii>& bridges, int st = 0) {
	vector<int> lowlink, orb;
	DGraph dfsg(g.vn);
	Lowlink(g, lowlink, dfsg, orb, st);

	REP(i, dfsg.vn) {
		for (auto itr : dfsg.g[i]) {
			if (orb[i] > orb[itr.first]) continue;

			if (orb[i] < lowlink[itr.first]) {
				bridges.push_back({ i, itr.first }