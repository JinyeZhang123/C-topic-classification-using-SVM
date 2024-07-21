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
    
    int NN;
    cin>>NN;
    string N=to_string(NN);
    
    for(int p=1;p<=9;p++){//2桁以上
        for(int q=1;q<=9;q++){
            int tmp=0;
            int lim=(int)N.size()-2;
            for(int i=0;i<=lim;i++){
                if(i==N.size()-2){
                    if(p==N[0]-'0'){
                        int sumi=0;
                        for(int j=1;j<N.size()-1;j++){
                            int tmp=N[j]-'0';
                            sumi=sumi*10+tmp;
                        }