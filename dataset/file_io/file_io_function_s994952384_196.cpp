int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int N;cin>>N;
        if(N==0) break;
        vector<pair<double,string>> S(N);
        
        for(int i=0;i<N;i++){
            cin>>S[i].second;
            vector<int> A(9);
            for(int j=0;j<9;j++) cin>>A[j];
            double price=A[6]*A[7]*A[8]-A[0],time=0;
            for(int j=1;j<=5;j++) time+=A[j];
            time+=(A[8]-1)*(A[4]+A[5]);
            //time*=A[8];
            
            S[i].first=-(price/time);
        }