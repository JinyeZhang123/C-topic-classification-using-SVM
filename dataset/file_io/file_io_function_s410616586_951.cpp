int main() {
    string fileNameIfs = "1_10.txt";
    const char* cstrIfs = fileNameIfs.c_str();
    ifstream ifs(cstrIfs);
    int n;
    if(!ifs.is_open()){ // 標準入力する
        cin >> n;

        rep(i,n-1){
            int a, b;
            scanf("%d%d", &a, &b);
            pre_G[a].push_back(b);
            pre_G[b].push_back(a);
        }