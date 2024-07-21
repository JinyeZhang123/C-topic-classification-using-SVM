template<class T>
class BinaryTree {
public:
	class Node {
	public:
		int parent = -1;
		int left;
		int right;

		T value;
	}