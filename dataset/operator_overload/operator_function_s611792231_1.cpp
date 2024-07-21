bignum operator*(bignum &x,int y){
		bignum ret;
		memset(&ret,0,sizeof(ret));
		ret.len=x.len;
		for(int i=1;i<=x.len;i++){
			ret.s[i]+=x.s[i]*y;
			ret.s[i+1]+=ret.s[i]/10;
			if(i==x.len && ret.s[i]>=10) ret.len++;
			ret.s[i]%=10;
		}