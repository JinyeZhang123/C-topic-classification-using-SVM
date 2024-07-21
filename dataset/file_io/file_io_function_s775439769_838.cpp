int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int a,b;
    cin>>a>>b;
    int cnt_neg=0, cnt_pos=0;
    for(int i=a;i<=b;i++){
        if(i<0) cnt_neg++;
        else    cnt_pos++;
    }