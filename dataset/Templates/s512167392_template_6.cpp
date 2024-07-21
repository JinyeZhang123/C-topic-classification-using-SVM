template < class Monoid >
struct SegT {
	//to be set--------------------------------------------------
	const static Monoid UNITY = LINF; //UNITY=0
	Monoid merge(const Monoid &a, const Monoid &b) {
		return min(a, b); //a+b;
	}