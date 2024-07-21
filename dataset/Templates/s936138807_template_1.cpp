template<class H,class ... T> void debug(H h,T... t){
	cerr<<h;
	if(sizeof... (t)){
		cerr<<", ";
	}