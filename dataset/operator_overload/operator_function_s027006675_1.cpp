bool operator<(const ver&a,const ver&b){
	ll vl=a.b*a.l+(x-a.b)*a.r;
	ll vr=b.b*b.l+(x-b.b)*b.r;
	return vl>vr;
}