template< typename DATA, class CALC, DATA FAIL, DATA LAZY_INIT >
class SegmentTreeLazy {
private:
	int size__;
	vector< DATA > data, lazy;
	
	inline int left_t(int k) { return (k << 1) + 1; }