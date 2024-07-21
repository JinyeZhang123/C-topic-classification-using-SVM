template<typename T>
T LCM(T n, vector<T> a) 
{
	T res = a[0];
	FOR(i, 1, n) 
		res = res * a[i] / GCD(res, a[i]);
	return res;
}