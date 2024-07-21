template <typename T>
void mul(T &a, T b){
	a *= b;
	if(a >= mod)a %= mod;
}