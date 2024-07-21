template <class T>
void readVector(int n, vector<T> &v){
	for(int i=0; i<n; ++i){
		T t;
		cin >> t;
		v.push_back(t);
	}