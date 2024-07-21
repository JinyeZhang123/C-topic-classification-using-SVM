template<typename T>
void ccout(T* array, int length) {
	int c;
	cout << array[0];
	for (c = 1;c < length;c++) {
		cout << " " << array[c];
	}