bool operator<(const wolf &a,const wolf &b){
	for(int i=0;i<4;i++){
		if(a.a[i]!=b.a[i])return a.a[i]<b.a[i];
	}