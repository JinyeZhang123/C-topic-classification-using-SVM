bool operator<(const result& lhs, const result& rhs) {
	if( lhs.corr == rhs.corr ) {
		return lhs.pena < rhs.pena;
	}