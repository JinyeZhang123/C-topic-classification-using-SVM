template <typename T>
class BinaryTree{
public:
	struct Node{
		T val;
		Node *lch,*rch;
	}