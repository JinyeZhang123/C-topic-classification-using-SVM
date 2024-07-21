template<typename T>
struct hungarian{//n<=m
	const T inf=numeric_limits<T>::max();
	int n, m, max_match, root;
	T max_cost;
	vector<vector<T>> cost;
	vector<T> lx, ly, slack;
	vector<int> xy, yx, prev, slackx;
	vector<bool> s, t;
	void update_labels(){
		T delta=inf;
		for(int y=0; y<m; y++) if(!t[y]) delta=min(delta, slack[y]);
		for(int x=0; x<n; x++) if(s[x]) lx[x]-=delta;
		for(int y=0; y<m; y++) if(t[y]) ly[y]+=delta;
		for(int y=0; y<m; y++) if(!t[y]) slack[y]-=delta;
	}