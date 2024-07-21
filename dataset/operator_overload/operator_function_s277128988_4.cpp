bool operator>(const xy &v){
		if(x!=v.x) return x > v.x;
		return y > v.y;
	}