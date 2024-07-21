int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    int k;
    cin>>k;

    string s;
    cin>>s;
    cout<<s.substr(0,min( k , (int)s.len ) );
    if (k<s.len) cout<<"...";
}