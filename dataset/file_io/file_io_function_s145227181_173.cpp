int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    vector<string> S(3);
    vector<int> T(3);
    for(int i=0;i<3;i++){
        cin>>S[i];
        T[i]=S[i].size();
    }