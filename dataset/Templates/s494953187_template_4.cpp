template<typename T> void print(T *ar, int row, int col, int C, string tag="") {
	if (!tag.empty()) cout << tag << ": " << endl;
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cout << ar[i*C + j] << ' ';
		}