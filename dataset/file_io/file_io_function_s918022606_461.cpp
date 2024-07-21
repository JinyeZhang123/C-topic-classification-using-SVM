int main() {
#if LOCAL&01
    std::ifstream in("./test/sample-2.in"); //input.txt
    std::cin.rdbuf(in.rdbuf());
#else
    cin.tie(0);
    ios::sync_with_stdio(false);
#endif
    ll N,Q; cin>>N>>Q;
    string s; cin>>s;
    struct Info{
        char c;
        char d;
        ll ofs=0;
    }