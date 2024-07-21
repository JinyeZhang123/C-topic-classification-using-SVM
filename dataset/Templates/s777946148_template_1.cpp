template<typename Monoid, typename Operand>
class SegTree {
public:
	Monoid* tree;
	Operand* calc;
	bool* lazy;
	size_t size, i, hight = 0;
	//?????????????????????
	SegTree(size_t length) {
		--length;
		size = length;
		if (size & 0xffff0000) { size = size & 0xffff0000;hight += 16; }