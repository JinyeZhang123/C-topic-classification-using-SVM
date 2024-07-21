template < typename T >
istream &operator>>(istream &is, vector< T > &A) {
	rep(i, A.size()) is >> A[i];
	return is;
}