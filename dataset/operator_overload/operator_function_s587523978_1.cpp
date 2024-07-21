bool operator<(const p &a12,const p &b12){
	if(a12.a!=b12.a)	return a12.a<b12.a;
	else return a12.b<b12.b;
	}