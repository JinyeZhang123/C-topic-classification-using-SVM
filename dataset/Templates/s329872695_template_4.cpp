template<class C>
	int minLeft(int a,int b,C &check,Monoid x,int k=0,int l=0,int r=-1){
		if(r==-1)r=size;
		eval(k,l,r);
		if(r<=a||b<=l||!check(dat[k],x))return -1;
		if(r-l==1)return l;
		int lv=minLeft(a,b,check,x,k*2+1,l,(l+r)/2);
		if(lv!=-1)return lv;
		return minLeft(a,b,check,x,k*2+2,(l+r)/2,r);
	}