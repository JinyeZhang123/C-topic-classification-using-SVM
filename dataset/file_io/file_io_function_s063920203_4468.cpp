int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    string N; cin >> N;
    int s = (int)(N.size()), sc = s-2;
    int Nd[s]; rep(i, s) Nd[i] = ctoi(N[i]);
    
    int res = 0; rep(i, s) res += Nd[i];
    while(sc >= 0){
        Nd[sc+1] = 9;
        if(Nd[sc] == 0) {
            Nd[sc] = 9;
        }