template<class T>
struct Parser{
    typedef string::const_iterator itr;
    itr begin;
    T ans;
    Parser(const string &s){
        begin=s.begin();
        ans=expr(begin);
        // cerr<<s<<" "<<ans<<"\n";
    }