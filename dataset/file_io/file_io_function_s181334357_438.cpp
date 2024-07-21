int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,M;cin>>N>>M;
    vector<int> A,B;
    for(int i=0;i<M;i++){
        int a;cin>>a;
        if(a&1){
            B.push_back(a);
        }