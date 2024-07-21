int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N>>L;
    vector<string> S(N);
    Trie<2,'0'> trie;
    for(int i=0;i<N;i++){
        cin>>S[i];
        trie.add(S[i]);
    }