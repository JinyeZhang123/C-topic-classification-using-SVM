qwq operator+(const qwq&a,const qwq&b){
	if(a.a<b.a)return a;
	else if(a.a>b.a)return b;
	else return{a.a,a.b+b.b}