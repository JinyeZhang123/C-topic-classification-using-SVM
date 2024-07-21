template<class C>
	int maxRight(int a,int b,C &check,Monoid x,int k=0,int l=0,int r=-1){
		if(r==-1)r=size;
		eval(k,l,r);
		if(r<=a||b<=l||!check(dat[k],x))return -1;
		if(r-l==1)return l;
		int rv=maxRight(a,b,check,x,k*2+2,(l+r)/2,r);
		if(rv!=-1)return rv;
		return maxRight(a,b,check,x,k*2+1,l,(l+r)/2);
	}