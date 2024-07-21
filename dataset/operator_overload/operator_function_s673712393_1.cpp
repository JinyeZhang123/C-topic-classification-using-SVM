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

int n;
int dp[MAXN * 2][MAXN * 2];

int bin_pow(int a, int n) {
    if(n == 0) return 1;
    int b = bin_pow(a, n / 2);
    b = (b * b) % mod;
    if(n % 2 == 1) b = (b * a) % mod;
    return b;
}