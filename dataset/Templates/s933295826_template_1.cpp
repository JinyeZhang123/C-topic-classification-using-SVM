template<typename STL> inline void print_STL(STL c, string ab = ""){
	cout << ab << c[0];
	for(int i = 1; i < c.size(); ++i) cout << ' ' << c[i]; }