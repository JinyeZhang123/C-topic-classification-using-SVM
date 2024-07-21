bool operator<(const P &a,const P &b){ 
	return a.w==b.w?a.c<b.c:a.w<b.w; 
}