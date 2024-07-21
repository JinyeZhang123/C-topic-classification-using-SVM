void ex_gcd(ll a, ll b, ll &x, ll &y, ll &d) { if (!b) { d = a, x = 1, y = 0; } else { ex_gcd(b, a % b, y, x, d);y -= x * (a / b); } }
