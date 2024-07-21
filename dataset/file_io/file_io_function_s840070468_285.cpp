int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int n, k, i, j, l, m, temp;
	int card[10];

	while(cin >> n >> k, n != 0 || k != 0) {

		pattern.resize(0);

		for(i = 0; i < n; i++) {
			cin >> card[i];
		}