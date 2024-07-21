int main(){
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i = 0;i <= 101;i++){
        for(int j = 0;j <= 101;j++){
            d[i][j] = INF;
        }