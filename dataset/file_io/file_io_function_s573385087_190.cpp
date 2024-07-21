int main(){
        
    ios_base::sync_with_stdio(0);
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)   cnt++;
    }