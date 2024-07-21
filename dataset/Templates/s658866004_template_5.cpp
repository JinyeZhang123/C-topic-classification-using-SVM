template<typename T> string join(const vector<T> &v, typename Identity<function<string(const T &)>>::type ft) {
	string rt = "";
	Foreach(x, v) {
		rt += ft(x);
	}