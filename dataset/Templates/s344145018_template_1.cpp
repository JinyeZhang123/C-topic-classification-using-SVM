template<class T>
class BinaryTree {
public:
	class Node {
	public:
		int parent = -1;
		int left;
		int right;

		int sibling;
		int degree;
		int depth;
		int height;
		T value;

		string getName() {
			if (parent == -1)
				return "root";
			else if (left == -1 && right == -1)
				return "leaf";
			else
				return "internal node";
		}