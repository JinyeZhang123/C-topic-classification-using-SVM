template<typename T> struct BIT{
	vector<T> dat;
	ll sz;
	//all 1-indexed
	BIT(ll sz) : sz(sz){
		dat.assign(++sz, 0);
	}