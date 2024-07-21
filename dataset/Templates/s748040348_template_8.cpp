template < class Monoid, class Action >
struct LSegT {
	int N;
	vector< Monoid > node;
	vector< Action > lazy;
	static inline Monoid UNITY_MONOID = pii(0, 0); //to be set------------------------
	static inline Action UNITY_ACTION = 0;		   //to be set------------------------
	Monoid merge(const Monoid &l, const Monoid &r) {
		//to be set---------------------------------
		//return l+r;
		return pii(l.first + r.first, (l.second * ten[r.first] % MOD2 + r.second) % MOD2);
	}