int main(){
        
    ios_base::sync_with_stdio(0);
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    unsigned long long  q,h,s,d,n;
    cin>>q>>h>>s>>d;
    cin>>n;
    unsigned long long n1 = min(s,min(2*h,min(4*q,2*q+h)));
    unsigned long long n2 = min(d, 2*n1);
    if(n==1){
        cout<<n1<<endl;
    }