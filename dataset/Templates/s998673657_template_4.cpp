template<class T1, class T2> void sub( T1 &x, T2 y, ll m = MOD )
{
	x -= y;
	if( x < 0 )
		x += m;
}