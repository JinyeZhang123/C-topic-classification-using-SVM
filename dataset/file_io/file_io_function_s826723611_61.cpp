int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int s, o;
	while(cin >> s, s) {
		s = 1000 - s;
		o = 0;
		while(s >= 500) {
			s -= 500;
			o++;
		}