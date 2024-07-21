template<class T>
class Tree {
public:
	class Node {
	public:
		int parent = -1;
		vector<int> children;

		T value;
	}