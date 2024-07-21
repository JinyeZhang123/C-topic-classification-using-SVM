int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    vector<string> p (10);
   
    p[3] = "bon";
    p[2]= p[4] =  p[5] = p[7] = p[9] = "hon";
    p[0] =  p[1] = p[6] = p[8] = "pon";
    string n;
    cin>>n;
    cout<<p[ n[n.len-1]-'0' ];

}