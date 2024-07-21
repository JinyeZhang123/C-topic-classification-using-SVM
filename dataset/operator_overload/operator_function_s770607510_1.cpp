bool operator<(const cakes& a, const cakes& b){
	if(a.lastcut == b.lastcut){
		return a.w*a.h > b.w*b.h;
	}