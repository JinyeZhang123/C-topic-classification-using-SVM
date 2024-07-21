int main() {
    int n;
    string fileNameIfs = "hogehoge.txt";
    const char* cstrIfs = fileNameIfs.c_str();
    ifstream ifs(cstrIfs);
    
    if(!ifs.is_open()){ // 標準入力する
        cin >> n;
        rep(i,n-1){
            int a, b;
            cin >> a >> b;
            a--; b--;
            aa[i] = a;
            bb[i] = b;
            G[a].push_back(b);
            G[b].push_back(a);
        }