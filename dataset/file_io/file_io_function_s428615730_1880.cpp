int main() {
#ifdef DEBUG
	ifstream ifs("in.txt");
	cin.rdbuf(ifs.rdbuf());
#endif
	ll N, A, B, C;
	cin >> N >> A >> B >> C;
	auto origA = A;
	auto origB = B;
	A = (A * myPow(100, MOD - 2, MOD)) % MOD;
	B = (B * myPow(100, MOD - 2, MOD)) % MOD;
	C = (C * myPow(100, MOD - 2, MOD)) % MOD;

	vec<ll, 1> FAC(2 * N + 1, 0);
	vec<ll, 1> DEFAC(2* N + 1, 0);
	FAC[0] = 1;
	FOR(i, 2*N) {
		FAC[i + 1] = FAC[i] * ll(static_cast<ll>(i) + 1) % MOD;
	}