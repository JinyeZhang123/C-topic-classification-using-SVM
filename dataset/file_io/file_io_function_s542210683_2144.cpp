int main() {

//    ifstream cin("/home/riku/Downloads/test_12.txt");

    int n, m;
    cin >> n >> m;


    Graph edges(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        edges[a].push_back(Edge(a, b, 1, i));
        edges[b].push_back(Edge(b, a, 1, i));
    }