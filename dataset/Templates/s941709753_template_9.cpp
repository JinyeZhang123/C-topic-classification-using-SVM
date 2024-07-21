template <class Type>
Type solve(Type res = Type()) {
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    return res = floor_sum(n, m, a, b);
}