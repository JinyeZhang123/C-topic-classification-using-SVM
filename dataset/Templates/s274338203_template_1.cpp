template<typename T>
struct cIndexedVertex{
	T index;
	int key;
	int parent;
	cIndexedVertex(T index_,int key_,int parent_)
		:index(index_)
		,key(key_)
		,parent(parent_){
	}