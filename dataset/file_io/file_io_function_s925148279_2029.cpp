int main() {
	int i, n, value;
	string command;
	Node * foundNode = NULL;

	// ifstream input;
	// input.open("input.txt");

	scanf("%d", &n);
	// input >> n;
	for (i = 0; i < n; i++) {
		// input >> command;
		cin >> command;
		if (command == "insert"){
			// input >> value;
			scanf("%d",&value);
			insert(value);
		}