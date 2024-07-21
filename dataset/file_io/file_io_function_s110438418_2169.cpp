int main() {
    int n;

//    ifstream is("/home/riku/Downloads/1_10.txt");

    cin >> n;
//    is >> n;
    Tree tree(n);
    rep(i, n - 1) {
        int a, b;
        cin >> a >> b;
//        is >> a >> b;
        tree.edge(a, b);
    }