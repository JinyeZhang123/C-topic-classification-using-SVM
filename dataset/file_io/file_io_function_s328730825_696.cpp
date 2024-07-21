int main(int argc, char *argv[])
{
    // input from txt （提出時にこの箇所は削除すること）
    //ifstream in("in.txt");
    //cin.rdbuf(in.rdbuf());
 
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> H >> W;
    //cin >> n >> E;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            cin >> w[i][j];
        }