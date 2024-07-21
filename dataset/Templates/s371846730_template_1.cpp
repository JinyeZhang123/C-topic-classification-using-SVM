template<typename T>
class cUnionFind{
private:
	struct cNode{
		T data;
		size_t parent;
		size_t rank;
	}