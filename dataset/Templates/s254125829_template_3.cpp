template < typename T, typename U >
istream &operator>>(istream &is, pair< T, U > &p) {
	is >> p.first >> p.second;
	return is;
}