template<typename T> void print(T x, string tag="") {
	if (tag.empty()) cout << x << endl;
	else cout << tag << ": " << x << endl;
}