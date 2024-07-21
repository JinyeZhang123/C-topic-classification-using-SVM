template<typename C>
	int find_last(int b,const C &check) {
		Monoid R = e;
		if(b>=sz) {
		if(check(op(reflect(1),R))) return find_subtree(1,check,R,true);
			return -1;
		}