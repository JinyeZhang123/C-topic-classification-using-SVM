template <typename T>
T pow(T a, ll n, ll MOD) {
    a %= MOD;
	T ans = 1;
	T tmp = a;
	for (int i = 0; i <= 60; i++) {
		ll m = (ll)1 << i;
		if (m & n) {
		ans *= tmp;
		ans %= MOD;
		}