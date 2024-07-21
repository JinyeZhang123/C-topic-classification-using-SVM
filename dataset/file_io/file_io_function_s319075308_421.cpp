int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    
    int A,B;cin>>A>>B;
    vector<int> sq(500000,-1);
    for(int i=0;i<=700;i++){
        sq[i*i]=i;
    }