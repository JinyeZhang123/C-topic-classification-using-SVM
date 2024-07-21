template<class T>
int h(T first,string t){
	T it=first;
	int c=0;
	for(int i=0;i<t.size();i++){
		if(*it!=t[i]) c++;
		it++;
	}