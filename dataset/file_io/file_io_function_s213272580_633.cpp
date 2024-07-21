int main() {
#ifdef INPUT_FROM_FILE
	ifstream cin("sample.in");
	ofstream cout("sample.out");
#endif
	auto input=[&]() {
		int m;
		cin >> m;
		VP res(m);
		REP(i, m)cin >> res[i].first >> res[i].second;
		return res;
	}