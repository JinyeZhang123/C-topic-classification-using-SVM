int main() {
#ifdef LOCAL
ifstream fin("1.txt");
streambuf*p;
p=cin.rdbuf(fin.rdbuf());
#endif // LOCAL
ll q;
cin>>q;
for(ll i=1;i<=q;i++){
    int t;
    cin>>t;
    if(0==t){
        ll value;
        cin>>value;
        number.push_back(value);
    }