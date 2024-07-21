template<class t,class ...A> inline void read(t &x,A &...a)
{
	read(x);read(a...);
	return;
}