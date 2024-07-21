void operator delete(void *) {}
*/
using namespace std;

#define loop(i, n) for(int i = 0; i < n; ++i)
#define FOR(i, a, n) for(int i = a; i < n; ++i)
#define vec vector
#define paii pair<int, int>
#define fr first
#define sc second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define SZ(x) (int)x.size()
#define Unique(x) x.erase(unique(all(x)), x.end())

#define int long long

const int inf = 1e17 + 47, MAXN = 2047, N = 20, mod = 1e9 + 7;

mt19937 rnd(time(0));

int n, k;
int d[MAXN], cnt[MAXN];
vec<int> graf[MAXN];

paii bfs(int st, int pr) {
    vec<int> pt;
    pt.pb(pr);
    d[pr] = -1;
    d[st] = 1;
    queue<int> q;
    q.push(st);
    while(!q.empty()) {
        int p1 = q.front();
        q.pop();

        pt.pb(p1);
        cnt[d[p1]]++;

        for(int p2 : graf[p1]) {
            if(d[p2] > d[p1] + 1) {
                d[p2] = d[p1] + 1;
                q.push(p2);
            }