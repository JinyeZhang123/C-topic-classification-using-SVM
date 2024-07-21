int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n;
    cin>>n;
    int mini=INT_MAX;
    for(int a=1;a<n;a++){
        int b = n-a;
        mini = min(mini, dig_sum(a)+dig_sum(b));
    }