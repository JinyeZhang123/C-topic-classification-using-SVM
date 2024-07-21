pii operator-(pii lhs, pii rhs) {
	return mp(lhs.fi-rhs.fi,lhs.se-rhs.se);
}