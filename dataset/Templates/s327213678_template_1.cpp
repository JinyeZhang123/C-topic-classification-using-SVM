template <class T = long long>
struct BIT_Range_Add_Point_Get {
	// 区間更新・点取得
	//階差数列のBITを作って端から足す方針 vec[i] = data[i-1]-data[i-2];
	vector<T> vec;
	int n;
	BIT_Range_Add_Point_Get(int sz) : vec(sz + 1, 0), n(sz) {}