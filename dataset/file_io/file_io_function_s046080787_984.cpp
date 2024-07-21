int main(){
    //ifstream cin("input.in");
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        dad[i] = i;
    for (int i = 1; i <= 2 * (n - 1); i++) {
        int a, b;
        cin >> a >> b;
        addEdge(a, b);
    }