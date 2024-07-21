void operator delete(void *) {}

int n;
bool used[N];
vector<int>g[N];
bool f[N][N];
int t[N],d[N][N];

void dfs(int v,int c=0)
{
    used[v]=1;
    t[v]=c+1;
    for (int i=0;i<g[v].size();++i){
        int to=g[v][i];
        if (!used[to]){
            dfs(to,(c^1));
        }