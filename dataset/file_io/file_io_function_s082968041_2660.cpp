int main() {

#ifdef LOCAL
    // 以降 cin の入力元が 'xxx.txt' になる
    std::ifstream in("code.txt");
    std::cin.rdbuf(in.rdbuf());
#endif

    int n, k;
    cin >> n >> k;

    vector<ll> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    auto area_x = x;
    auto area_y = y;
    sort(area_x.begin(), area_x.end());
    sort(area_y.begin(), area_y.end());
    auto area_x_r = x;
    reverse(area_x_r.begin(), area_x_r.end());
    auto area_y_r = y;
    reverse(area_y_r.begin(), area_y_r.end());

    ll ans = 9e18 + 1;
    for(auto x0 : area_x) {
        for(auto x1 : area_x_r) {
            if(x0 > x1)
                continue;
            for(auto y0 : area_y) {
                for(auto y1 : area_y_r) {
                    if(y0 > y1)
                        continue;
                    // 判定
                    int num = 0;
                    rep(i, n) {
                        if(x0 <= x[i] && x[i] <= x1 && y0 <= y[i] &&
                           y[i] <= y1) {
                            num++;
                        }