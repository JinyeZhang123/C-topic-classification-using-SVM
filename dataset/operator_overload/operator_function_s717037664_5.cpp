bool operator<(vec a,vec b){
		if(a.arg()!=b.arg())return a.arg()<b.arg();
		return a.x*a.x+a.y*a.y<b.x*b.x+b.y*b.y;
	}