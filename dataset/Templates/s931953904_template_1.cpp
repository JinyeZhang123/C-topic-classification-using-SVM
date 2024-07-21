template<typename T> 
bool chmin(T &l, T r) {
	bool res = l > r;
	if (res) {
		l = r;
	}