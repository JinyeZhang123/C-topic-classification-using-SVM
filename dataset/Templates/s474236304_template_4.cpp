template<class A,class Pertition>
auto qs(A&a,ui p, ui r, Pertition f)->void {
	if (p < r) {
		auto q = f(a, p, r);
		qs(a, p, q, f);
		qs(a, q + 1, r, f);
	}