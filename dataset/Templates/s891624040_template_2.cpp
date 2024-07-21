template<class T>
class Tree {
public:
	class Node {
	public:
		int parent;
		vector<int> children;
		int depth;
		T value;
	}