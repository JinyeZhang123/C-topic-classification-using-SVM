template<class T>
class SegTree {
protected:
	int n, N; // n is the original size, while N is the extended size
	int base;
	vector<T> nodes;
	int left_of(int index) {
		if (index >= base) return -1;
		else return index * 2 + 1;
	}