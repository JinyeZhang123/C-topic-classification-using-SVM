template<class T>
class BinaryTree {
public:
	class Node {
	public:
		int parent;
		int left;
		int right;
		T value;

		Node() : parent(-1), left(-1), right(-1) {}