template<typename T>
int partition(vector<T> &B, int p, int r) {
	int x = B[r].first;
	int i = p - 1;

	REP2(j, p, r) {
		if (B[j].first <= x) {
			i++;
			swap(B[i], B[j]);
		}