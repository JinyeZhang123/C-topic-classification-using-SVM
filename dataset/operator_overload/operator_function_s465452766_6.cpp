bool operator<(point p){
		if(fabs(x-p.x)>eps) return x<p.x;
		return y<p.y;
	}