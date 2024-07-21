int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int W,D;cin>>W>>D;
        if(W+D==0) break;
        vector<int> A(21),B(21);
        for(int i=0;i<W;i++){
            int a;cin>>a;
            A[a]++;
        }