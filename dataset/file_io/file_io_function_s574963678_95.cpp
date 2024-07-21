int main() {
	//ifstream fin("in.txt");

	int n = 0;

	while (cin >> n) {

		if (n == 0)break;

		//???????????\???
		vector<vector<int> > member;

		for (int i = 0; i < n; i++) {

			int num = 0;
			cin >> num;

			vector<int> piece;

			for (int i = 0; i < num; i++) {
				int tmp = 0;
				cin >> tmp;
				piece.push_back(tmp);
			}