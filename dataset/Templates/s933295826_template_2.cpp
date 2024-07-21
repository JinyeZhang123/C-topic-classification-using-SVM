template<typename STL> inline void import_STL(STL& c, int n){
	typename STL::value_type tmp;
	for(int i = 0; i < n; ++i){	cin >> tmp; c.push_back(tmp);}