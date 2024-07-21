template<class InputIterator>
void dump(InputIterator first,InputIterator last,char delim=' '){
	for(InputIterator it=first;it!=last;it++){
		if(it!=first)cout<<delim;
		cout<<*it;
	}