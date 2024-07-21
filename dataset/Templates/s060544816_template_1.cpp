template <typename T>
class  PriorityQueue {
private:
	vector <T> d;
public:
	void push(T s) {
		int k = d.size();
		d.push_back(s);
		while (k&&d[(k - 1) / 2] < d[k]) {
			swap(d[(k - 1) / 2], d[k]);
			k = (k - 1) / 2;
		}