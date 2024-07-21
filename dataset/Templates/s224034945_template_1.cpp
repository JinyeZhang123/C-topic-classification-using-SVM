template<typename T>
bool chmin(T &l, T& r){
	bool f = l>r; if (f)l = r; return f;
}