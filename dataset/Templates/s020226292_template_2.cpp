template<typename t1, class t2>
void output(t1 count,t2 array) {
	for(t1 i = 0;i < count;i++) {
		cout << array[i].str;
		if(i != count - 1) cout << " ";
	}