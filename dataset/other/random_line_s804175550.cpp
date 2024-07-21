ll gcd(ll n, ll m) { return (m ? gcd(m, n%m) : n); }
