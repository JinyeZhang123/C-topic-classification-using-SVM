bool operator<(const d &l, const d &r){  // なるべく全順序になるようにしたほうが良い
	ll cl = l.b-l.a, cr = r.b-r.a;
	if(cl>=0 && cr<0)return true;
	if(cl<0 && cr>=0)return false;
	if(cl>=0 && cr>=0){
		if(l.a<r.a)return true;
	}