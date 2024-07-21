int main() {
#if LOCAL&01
    std::ifstream in("./test/sample-1.in");
    //std::ifstream in("./input.txt");
    std::cin.rdbuf(in.rdbuf());
#else
    cin.tie(0);
    ios::sync_with_stdio(false);
#endif
    ll H,W,N; cin>>H>>W>>N;    
    ll sr,sc; cin>>sr>>sc;
    string S; cin>>S;
    string T; cin>>T;

    unordered_map<char,pair<int,int>> ofs = {
        {'U',{0,-1}