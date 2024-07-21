int main(){
	//ifstream cin("input.txt");
	
	cin >> n;
	cin >> s;
	for(int i=0,u,v;i<n-1;i++){
		cin >> u >> v; u--,v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}