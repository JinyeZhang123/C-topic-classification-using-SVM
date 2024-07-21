int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<int> A(2*N-1);
    for(int i=0;i<2*N-1;i++) cin>>A[i];
    
    int left=1,right=2*N-1;
    while(right-left>1){
        int mid=(left+right)/2;
        
        vector<int> B(2*N-1);
        for(int i=0;i<2*N-1;i++) if(A[i]>=mid) B[i]=1;
        
        bool ok=false;
        
        int s=N-1,t=N-1;
        
        if(B[s-1]+B[s]==2||B[s]+B[s+1]==2) ok=true;
        else if(B[s]||B[s-1]+B[s+1]==2){
            if(B[s]){
                s-=2;
                t+=2;
            }