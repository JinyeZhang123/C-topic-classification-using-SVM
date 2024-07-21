int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll s;
    cin >> s;
    vector<bool> fg(1000010, false);
    fg[s] = true;
    
    int res = 1;
    while(true){
        if(s%2 == 0) s = s/2;
        else s = 3*s + 1;
        
        res++;
        if(fg[s]) break;
        else fg[s] = true;
    }