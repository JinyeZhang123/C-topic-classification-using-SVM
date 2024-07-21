int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    
    bool fg = true;
    for(int i=0; i<50000; i++){
        if((int)((double)i*1.08) == N) {
            cout << i << endl;
            fg = false;
            break;
        }