template<typename T>
class SegmentTree {
private:
    int n;
    T dat[2*(1<<17)-1];
public:
    SegmentTree(int& n_) {
	n = 1;
	while (n < n_) n *= 2;
	n_ = n;
	for (int i = 0; i < 2*n-1; i++) dat[i] = (1LL<<31) - 1;
    }