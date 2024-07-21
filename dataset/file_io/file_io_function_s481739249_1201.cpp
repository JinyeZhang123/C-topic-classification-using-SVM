int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N;cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>color[i];
        color[i]--;
    }