boolean operator>( const point& a, const point& b) {
	if ( a.x == b.x )
		return a.y > b.y;
	return a.x > b.x;
}