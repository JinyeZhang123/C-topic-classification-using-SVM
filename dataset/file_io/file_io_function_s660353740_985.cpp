int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    struct Vec {
        int x, y;
        double angle;
        bool operator<(const Vec& v){ return angle < v.angle;}