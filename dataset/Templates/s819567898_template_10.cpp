template<class T>
class binary_indexed_tree {
private:

	int size;
	vector<T>vec;

public:

	explicit binary_indexed_tree(int size)
		:size(size + 1)
	{
		vec.resize(size + 1);
	}