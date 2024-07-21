int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ifstream ifs("2170_input.txt");
    int Q, _t;
    char _c;
    while(cin >> N >> Q && N){
        vector<bi> query;
        memset(marked, 0, sizeof(marked));
        REP(i, 1, N){
            cin >> _t; _t--;
            T[i] = _t;
        }