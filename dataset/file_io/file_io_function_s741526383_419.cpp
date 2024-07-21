int main(){
	int i,j; // for loop
	int childNode, parentNode, degreeOfNode, previousChildNode, root;
	// ifstream input;
	// input.open("input");

	cin >> n;
	// input >> n;

	// initialize
	for (i = 0; i < n; i++)
		nodes[i].parent = nodes[i].leftChild = nodes[i].rightSibling = NIL;

	for (i = 0; i < n; i++){
		cin >> parentNode >> degreeOfNode;
		// input >> parentNode >> degreeOfNode;
	
		for (j = 0; j < degreeOfNode; j++){
			cin >> childNode;
			// input >> childNode;

			if (j == 0)
				nodes[parentNode].leftChild = childNode;
			else
				nodes[previousChildNode].rightSibling = childNode;

			previousChildNode = childNode;
			nodes[childNode].parent = parentNode;
		}