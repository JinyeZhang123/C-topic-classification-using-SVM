template<typename T>
class cUnionFind{
private:
	struct cNode{
		T data;
		size_t parent;
		size_t rank;
		cNode(T data_,size_t parent_,size_t rank_)
			:data(data_),parent(parent_),rank(rank_){}