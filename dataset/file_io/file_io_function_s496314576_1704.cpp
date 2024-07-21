int main() {
//    ifstream file("C:\\Users\\riku\\Downloads\\08 (2).txt");

    int n;
    ll m;
    cin >> n >> m;


    vector<ll> people(n);
    rep(i, n) cin >> people[i];

    sort(people.begin(), people.end());


    ll floor = -1, ceil = INF;

    auto count_over = [&](ll mid) {
        ll sum = 0;
        for (ll p : people) {
            ll k = mid - p;
            auto it = lower_bound(people.begin(), people.end(), k);
            int c = distance(it, people.end());
            sum += c;
        }