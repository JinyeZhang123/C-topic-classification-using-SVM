bool operator<(seg x,seg y){
	return x.b==y.b?x.a<y.a:x.b<y.b;
}