template<class F, class... S>
F myMin(const F& first, const S&... second){
	F m = myMin(second...);
	if (m > first){
		return first;
	}