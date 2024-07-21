int main() {

//    ifstream myfile("/home/riku/Downloads/02.txt");


    int n, m;
    cin >> n >> m;

    UnionFind uf(n);

    rep(i, m) {
        int l, r, d;
        cin >> l >> r >> d;
        l--;
        r--;

        uf.connect(l, r, d);
    }