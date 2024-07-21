int main() {
#ifdef HOME
    ifstream cin("B.in");
    ofstream cout("B.out");
#endif
    //int ;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    ll n;
    cin >> n;
    n *= 2;

    ll k = n - 1;
    for(ll a = 1; a * a <= n; a++) {
        if(n % a == 0) {
            ll b = n / a;
            if(__gcd(a, b) == 1) {
                /*ll x, y;
                euclid(a, b, 1, x, y);
                
                ll cur = min(llabs(a * x), llabs(b * y));
                if(cur > 0)
                    k = min(k, cur);
                */
                
                for(ll val = b; val - 1 < k; val += b) {
                    ll r = val % a;
                    if(r == 1) {
                        k = min(k, val - 1);
                        break;
                    }