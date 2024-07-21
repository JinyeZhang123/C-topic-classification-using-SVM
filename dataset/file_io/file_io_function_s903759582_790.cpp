int main() {
    //fstream fs("/home/shinku/1_16.txt", ios_base::in);
    cin >> n >> x;
    for (ll i = 0; i < n; i++) cin >> a[i];
    btr(0, n, 1);
    ll r = INT64_MAX / 2;
    for (ll t = 0; t < n; t++) {
        ll c = t * x;
        for (ll s = 0; s < n; s++) {
            c += rmq((s - t + n) % n, (s + 1) % n);
        }