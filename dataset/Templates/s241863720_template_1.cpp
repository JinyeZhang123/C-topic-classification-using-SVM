template <class T>
class RMQ{
	private:
	vector<T> data;
	int n;
	const T UNDEF;

	T _query(int a, int b, int k, int l, int r){
		if (r <= a || b <= l) return UNDEF;
		if (a <= l && r <= b) return data[k];
		else{
			T left = _query(a, b, 2 * k + 1, l, (l + r) / 2);
			T right = _query(a, b, 2 * k + 2, (l + r) / 2, r);
			return min(left, right);
        }