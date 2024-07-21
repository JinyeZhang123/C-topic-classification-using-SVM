int main(){
//    ifstream in("b_in.txt");
//    cin.rdbuf(in.rdbuf());
    int n;
    while(cin >> n,n){
        string w[50];
        int l[50];
        rep(i,n) cin >> w[i];
        l[0] = 0;
        REP(i,1,n+1) {
            l[i] = l[i-1] + w[i-1].size();
        }