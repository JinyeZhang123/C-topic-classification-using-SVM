int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int sum1 = x*a + y*b;
    int sum2 = 2*min(x,y)*c;
    int sum3 = 2*max(x,y)*c;
    if(x>y) sum2 += (x-y)*a;
    else    sum2 += (y-x)*b;
    cout<<min(sum1,min(sum2,sum3))<<endl;
    return 0;
}