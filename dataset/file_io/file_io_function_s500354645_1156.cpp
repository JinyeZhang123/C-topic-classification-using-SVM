int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        string S;cin>>S;
        if(S[0]=='.') break;
        
        int cnt=0;
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int ii=0;
                    P=i;
                    Q=j;
                    R=k;
                    
                    if(expr(S,ii)==2) cnt++;
                }