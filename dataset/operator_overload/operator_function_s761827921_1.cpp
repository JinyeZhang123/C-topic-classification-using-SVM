S operator&(const S&a,const S&b){
	S ans;ans=a;for(int i=0;i<a.size();++i)if(b[i]=='0')ans[i]='0';
	return ans;
}