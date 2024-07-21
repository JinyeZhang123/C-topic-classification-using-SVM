template<class T>T pow2(T x_)
{
	if (x_ == 0)return 1;
	T ans = pow2(x_ / 2);
	return ans * ans * ((x_ % 2) ? 2 : 1);
}