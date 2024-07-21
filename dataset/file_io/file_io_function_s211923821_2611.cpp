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
    
    int N,M;
    string S;
    cin>>N>>M>>S;
    vector<int>step;
    step.push_back(N);
    int ind=N-M;
    while(ind>0){
        int f=0;
        for(int i=0;i<M;i++){
            if(S[ind+i]=='0'){
                step.push_back(ind+i);
                ind=ind+i-M;
                f=1;
                break;
            }