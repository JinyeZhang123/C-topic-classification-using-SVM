int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    i64 a,b,k;
    cin>>a>>b>>k;
    int dir=0;
    while(k--){
        if(dir==0){
            if(a%2==1){
                a--;
            }