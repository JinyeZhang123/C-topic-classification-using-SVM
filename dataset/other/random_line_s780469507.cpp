ll gcd(ll i, ll j) { return j ? gcd(j, i % j) : i; }
