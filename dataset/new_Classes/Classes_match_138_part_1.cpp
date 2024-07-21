class UnionFind {
public:
	int oya[2521], size;
	void ini(int size) { this->size = size; for( int i = 0;i < size; i++ ) oya[i] = i; }                                                                   