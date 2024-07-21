template<class T1, class T2> void add( T1 &x, T2 y, ll m = MOD )
{
	x += y;
	if( x >= m )
		x -= m;
}