int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

//    ifstream in("input.txt");
//    cin.rdbuf(in.rdbuf());

    while (cin >> w >> h, w) {
        memset(G, 0, sizeof(G));

        rep(y, h) rep(x, w) {
                cin >> G[y][x];
                if (G[y][x] == 2) sx = x, sy = y;
                if (G[y][x] == 3) gx = x, gy = y;
            }