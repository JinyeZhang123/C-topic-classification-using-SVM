void operator delete(void *) {}

main ()
{
    ios;
    string s;
    cin>>s;
    int ans=0;
    int kol=0;
    for (int i=0;i<s.size();++i){
        if (s[i]=='B')++kol;
        else {
            ans+=kol;
        }