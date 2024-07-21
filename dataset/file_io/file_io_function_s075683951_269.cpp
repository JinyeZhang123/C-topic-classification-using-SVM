int main(){
    //ifstream cin(NAME".inp");
    string s,t;
    cin>>s>>t;

    for(int i=0;i<s.len;i++) pos[s[i]-'a'].push_back(i);

    for(int i=0;i<t.len;i++) if (pos[ t[i]-'a' ].size()==0 ) {
        cout<<-1;
        return  0;
    }