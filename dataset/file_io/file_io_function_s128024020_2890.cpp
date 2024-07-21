int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //ifstream fin;
    //ofstream fout;
    //fin.open("input.txt");
    //fout.open("output.txt");
    //clock_t launch=clock();
    ll n,m,k;
    cin>>n>>m>>k;
    ll fct[MAX],inv[MAX],in[MAX];
    fct[0]=1;
    inv[0]=1;
    fct[1]=1;
    inv[1]=1;
    in[1]=1;
    for(int i=2;i<=200000;i++){
        fct[i]=(fct[i-1]*i)%inf;
        in[i]=(inf-((inf/i)*in[inf%i])%inf)%inf;
        inv[i]=(inv[i-1]*in[i])%inf;
    }