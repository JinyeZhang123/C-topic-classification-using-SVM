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
    


//    for(int p=1;p<=N[0]-'0';p++){//2桁以上
//        for(int q=1;q<=9;q++){
//            int tmp=0;
//            for(int i=0;i<=N.size()-2;i++){
//                if(i==N.size()-2&&p==N[0]-'0'){
//                    if(q>N[N.size()-1]-'0'){
//                        continue;
//                    }