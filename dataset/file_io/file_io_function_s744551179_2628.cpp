int main(int argc, const char * argv[])
{
    //scanf("%s",S);
    //scanf("%d",&N);
    //scanf("%lld %lld",&target1,&target2);
    //sscanf(tmp.c_str(),"%dd%d%d",&time[i], &dice[i], &z[i]);
    //getline(cin, target);
    //ifstream ifs("01");//テスト用
    //ifs >> a;
    //ここから
    
    //入力高速化
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin>>s;
    int n=(int)s.size();
    
    for(int i=0;i<n-1;i++){
        if(s[i]=='R'&&s[i+1]=='L'){
            int ind=i;
            int cntr=0;
            int cntl=0;
            while(s[ind]=='R'&&ind>=0){
                if((ind-i)%2==0){
                    cntr++;
                }