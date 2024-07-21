template<class T>
class SegTree {
protected:
	int n, N; // n is the original size, while N is the extended size
	int base;
	vector<T> nodes;
	int left_of(int id) {
		if (id >= base) return -1;
		else return id * 2 + 1;
	}