void operator delete(void *){}
    */

const int N = 2e3 + 123;
const ll mod = 1e9 + 7;

int n;
pair<int, int> p[N * 100];
ll dp[N * 2][N * 2];
ll fact[N * 10];

ll bin_pow(ll x, ll y){
	ll res = 1;
	while(y){
		if(y & 1)	
			res = res * x % mod;
		x = x * x % mod;
		y >>= 1LL;
	}