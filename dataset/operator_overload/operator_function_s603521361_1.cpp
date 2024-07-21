node operator+(node x,node y){
		node z;
		for(int i=1;i<=3;i++)z.mi[i]=min(x.mi[i],y.mi[i]);
		return z;
	}