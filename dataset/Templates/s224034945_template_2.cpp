template<typename T>
bool chmax(T &l, T& r){
	bool f = l<r; if (f)l = r; return f;
}