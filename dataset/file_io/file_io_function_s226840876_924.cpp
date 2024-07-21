int main() {

//    ifstream cin("/home/riku/Downloads/rand_20_03.txt");
//    ofstream cout("/home/riku/CLionProjects/atcoder/res.txt");

    int h, w, k;
    cin >> h >> w >> k;

    int sx, sy, gx, gy;
    cin >> sy >> sx >> gy >> gx;

    sx--;
    sy--;
    gx--;
    gy--;

    vector<vector<char>> board(h, vector<char>(w));
    rep(y, h) rep(x, w) cin >> board[y][x];

    vector<vector<vector<int>>> distances(2, vector<vector<int>>(h, vector<int>(w, INT_MAX / 10)));


    rep(o, 2) distances[o][sy][sx] = 0;

    priority_queue<Point, vector<Point>, function<bool(Point &, Point &)> > q([](Point &p1, Point &p2) -> bool {
        if (p1.depth != p2.depth) return p1.depth > p2.depth;
        if (p1.orientation != p2.orientation) return p1.orientation > p2.orientation;

        if (p1.orientation == 0) {
            return !(p1.x >= p2.x);
        }