template<typename T> void print(T *ar, int len, string tag="") {
	if (!tag.empty()) cout << tag << ": ";
	for (int i = 0; i < len; ++i) cout << ar[i] << ' ';
		cout << endl;
}