int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll xs, ys, xg, yg;
    cin >> xs >> ys >> xg >> yg;
    ll n;
    cin >> n;
    vector<S> vs(n);
    rep(i, n) cin >> vs[i].x >> vs[i].y >> vs[i].r;
    Dijkstra<double> di(n + 2);
    {
        double d = get_dist(xs, ys, xg, yg);
        di.add_edge(0, 1, d);
        di.add_edge(1, 0, d);
    }