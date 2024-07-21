template<typename T>
T func(T x) {
	return x <= 1 ? 1 : x * func(x - 1);
}