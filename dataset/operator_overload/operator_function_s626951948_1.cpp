bool operator<(hh a,hh b){
	if(a.x!=b.x)return a.x>b.x;
	else return a.y>b.y;
}