int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    ll X, Y;
    cin >> X >> Y;

    if (abs(X - Y) <= 1){
        print("Brown");
    }