int main() {
	//ifstream fin("in.txt");

	while (true) {
		fin >> h >> w >> last;
		if ((h | w) == 0)break;

		//initialize
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				panel[i][j] = 0;
			}