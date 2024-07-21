template < class Monoid, class Action >
struct LSegT {
	int N;
	vector< Monoid > node;
	vector< Action > lazy;
	Monoid UNITY_MONOID; //to be set------------------------
	Action UNITY_ACTION; //to be set------------------------
	Monoid merge(const Monoid &l, const Monoid &r) {
		//to be set---------------------------------
		//return l+r;
		return;
	}