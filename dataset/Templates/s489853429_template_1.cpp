template <typename T>
struct Combination {
	vector<T> fc,ifc;
	T MOD;
	int sz;
 
	Combination(T MOD,T sz):fc(sz+1),ifc(sz+1),MOD(MOD),sz(sz) {}