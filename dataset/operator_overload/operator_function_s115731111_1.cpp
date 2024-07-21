bool operator<(node x,node y){
	if(x.p2!=y.p2)return x.p2>y.p2;
	else return x.p5>y.p5;
}