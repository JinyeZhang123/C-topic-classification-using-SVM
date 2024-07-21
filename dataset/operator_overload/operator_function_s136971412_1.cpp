bool operator<(const Pt &a,const Pt &b){
	if(sig(a.x-b.x)){
		return sig(a.x-b.x)<0;
	}