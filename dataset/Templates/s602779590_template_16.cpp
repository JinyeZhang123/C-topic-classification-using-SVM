template<class SEG, class LAZ>
class LazySegmentTree {
private:
	std::vector<SEG> seg;
	std::vector<LAZ> laz;
	std::vector<bool> isUpdated;
	int ARY_SIZE;
	SEG eSeg;
	LAZ eLaz;
	std::function<SEG(SEG&, SEG&)> mergeSeg;
	std::function<LAZ(LAZ&, LAZ&)> mergeLaz;
	std::function<SEG(SEG&, LAZ&, int)> applyLaz;

	void push(int k, int l, int r) {
		if (!isUpdated[k]) {
			seg[k] = applyLaz(seg[k], laz[k], r - l);
			if (r - l > 1) {
				mergeLaz(laz[k * 2 + 1], laz[k]); isUpdated[k * 2 + 1] = false;
				mergeLaz(laz[k * 2 + 2], laz[k]); isUpdated[k * 2 + 2] = false;
			}