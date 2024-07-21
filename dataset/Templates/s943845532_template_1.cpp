template <class T = long long>
struct edge {
	T cap;
	int from;
	int to;
	int rev;  // fromの方の配列で逆辺が何番目に存在するか
	bool operator<(const edge a) const {
		if(cap != a.cap) return cap < a.cap;
		if(from != a.from) return from < a.from;
		return to < a.to;
	}