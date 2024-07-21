template<class T> struct edge{
	int to;
	T wt;
	edge(int to,const T& wt):to(to),wt(wt){}