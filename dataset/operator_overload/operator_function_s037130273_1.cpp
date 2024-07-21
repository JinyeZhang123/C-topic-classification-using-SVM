bool operator<( const t_piece &l, const t_piece &r ) {
	if( l.n == r.n ) {
		return l.w*l.d < r.w*r.d;
	}