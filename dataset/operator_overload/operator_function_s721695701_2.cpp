bool operator<(const Dice& d1, const Dice& d2) {
	return d1.toV() < d2.toV();
}