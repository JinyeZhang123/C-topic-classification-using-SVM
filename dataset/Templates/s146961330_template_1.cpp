template <typename T>
void add(T &a, T b){
	a += b;
	if(a >= mod)a -= mod;
}