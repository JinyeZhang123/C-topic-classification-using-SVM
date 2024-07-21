int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int X; cin >> X;
    vector<bool> P(100001, false);
    repm(i, 100, 106) P[i] = true;
    repm(i, 105, 100001) {if(P[i-100] || P[i-101] || P[i-102] || P[i-103] || P[i-104] || P[i-105]) P[i] = true;}