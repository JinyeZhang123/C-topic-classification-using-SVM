template<typename T>
struct BinaryIndexedTree{
	vector< T > data;
	BinaryIndexedTree(T sz){
		data.assign(sz + 1, 0);
  	}