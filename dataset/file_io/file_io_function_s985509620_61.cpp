int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int i, h, m, s, t;
	for(i = 0; i < 3; i++) {
		cin >> h >> m >> s;
		t = (h * 3600) + (m * 60) + s;
		cin >> h >> m >> s;
		t = ( (h * 3600) + (m * 60) + s ) - t;
		cout << t / 3600 << " " << (t % 3600) / 60 << " " << t % 60 << endl;
	}