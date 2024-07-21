int main() {
    ios_base::sync_with_stdio(false);

//    fstream out;
//    out.open("output", ios_base::out);

    int d;
    cin >> d;

    Solution solution(n, d);

    mt19937 rnd(start_time.time_since_epoch().count());
    int cnt = 0;
    while (!timeout(1950)) {
        for (int t = 0; t < d; t++) {
            int i = rnd() % n;
            int64_t delta = solution.estimate(t, i);
            if (delta > 0) solution.change(t, i, delta);
        }