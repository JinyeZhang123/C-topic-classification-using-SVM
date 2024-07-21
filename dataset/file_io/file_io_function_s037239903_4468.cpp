int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    string S; cin >> S;
    if(S[0] == '>') S = '<' + S;
    if(S[(int)(S.size()) - 1] == '<') S += '>';
    int s = (int)(S.size());
    
    ll res = 0;
    ll lcnt = 0, gcnt = 0;
    rep(i, s){
        if(S[i] == '<') lcnt++;
        if(S[i] == '>') {
            gcnt++;
            if(i == s-1 || S[i+1] == '<'){
                ll mxc = max(lcnt, gcnt);
                ll mnc = min(lcnt, gcnt);
                res += mxc * (mxc+1) / 2;
                res += mnc * (mnc-1) / 2;
                lcnt = gcnt = 0;
            }