template<typename V,typename Weight>
class DijekstraFast {
private:
	typedef pair<Weight,V> P;
	struct RadixHeap{
		V last,sz;
		vector<P> bucket[64];
		RadixHeap() : last(0), sz(0){}