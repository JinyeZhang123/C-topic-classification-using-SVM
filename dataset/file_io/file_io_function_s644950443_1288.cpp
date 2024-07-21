int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    cin >> n >> k;
    for(int i = 1;i <= n - 1;i++){
        int u,v;
        cin >> u >> v;
        quer[i] = {u, v}