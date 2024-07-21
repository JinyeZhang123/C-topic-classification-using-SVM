void operator delete(void *){}
    */
const int N = 2e3 + 1;

int n, k, ans[N], t, was, uwas;
vector<int> g[N];

void dfs(int v, int pr=0, int d=0){
	if(k % 2 == 0){
		if(d > k / 2){
			ans[t] += 1;
		}