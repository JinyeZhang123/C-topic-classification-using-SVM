int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    IO;
    init();
    cin >> n >> q;
    //build (1, 1, n);
    while (q --) {
        intt type, i, j, val;
        cin >> type;
        if (type == 0)
            cin >> i >> j >> val, update (1, 1, n, i, j, val);
        else
            cin >> i >> j, cout << query (1, 1, n, i, j) << endl;
    }