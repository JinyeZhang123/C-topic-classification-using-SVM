int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int h,w,n;
    cin>>h;
    cin>>w;
    cin>>n;
    int x = max(h,w);
    cout<<(n+x-1)/x<<endl;
    return 0;
}