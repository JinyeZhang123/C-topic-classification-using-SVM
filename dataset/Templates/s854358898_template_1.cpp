template<class T>
void initvv(vector<vector<T> > &v,int a,int b,const T &t=T()){
	v.assign(a,vector<T>(b,t));
}