template <typename T>
void sub(T &a, T b){
	a -= b;
	if(a < 0)a += mod;
}