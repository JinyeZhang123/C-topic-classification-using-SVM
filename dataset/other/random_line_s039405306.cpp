map<ll, ll> prime_factor(ll n){ map<ll, ll> m; for(ll i = 2; i * i <= n; i++){ while(n % i == 0){ m[i]++; n /= i; } } if(n != 1) m[n] = 1; return m; }
