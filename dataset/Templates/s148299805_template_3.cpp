template<typename C>
	int find_first(int a,const C &check) {
		Monoid L = e;
		if(a<=0) {
			if(check(op(L,reflect(1)))) return find_subtree(1,check,L,false);
			return -1;
		}