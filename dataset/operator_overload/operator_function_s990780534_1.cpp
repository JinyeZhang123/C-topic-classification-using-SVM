bool operator<(const Team& lhs, const Team& rhs) {
	if( lhs.corr == rhs.corr ) {
		if( lhs.pen == rhs.pen ) {
			return lhs.id < rhs.id;
		}