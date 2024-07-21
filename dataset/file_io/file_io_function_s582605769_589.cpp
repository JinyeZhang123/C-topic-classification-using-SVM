int main() {
	dp();
	ifstream fin("test.txt");
	ofstream fout("ans.txt");
	int n;
	while (true) {
		cin >> n;
		if (n == 0) break;
		cout << dp1[n] << " " << dp2[n] << endl;
	}