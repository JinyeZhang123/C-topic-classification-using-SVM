int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int n, k, top, left, min, i;
	cin >> n >> k;
	for(i = 0; i < k; i++) {
		cin >> left >> top;
		min = left < n-left+1 ? left : n-left+1;
		min = min < top ? min : top;
		min = min < n-top+1 ? min : n-top+1;
		cout << (min%3 == 0 ? 3 : min%3) << endl;
	}