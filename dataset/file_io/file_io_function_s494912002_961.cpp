int main(){
        
    ios_base::sync_with_stdio(0);
    
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    //fin >> a >> b;
    //fout << a+b << endl;
    i64 n;
    cin>>n;
    //i64 x;
    
    int num_digits = int(log10(n))+1;
    

    int max_sum=sum_dig(n);
    
    i64 expo = i64(pow(10,num_digits-1));
    i64 p = ((n/expo)*expo) - 1;

    max_sum = max(max_sum, sum_dig(p));


    /*
    for(i64 i=1;i<=n;i++){
        int sum = 0;
        i64 num=i;
        while(num){
            sum += (num%10);
            num /= 10;
        }