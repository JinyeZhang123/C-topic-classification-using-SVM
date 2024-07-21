template<class L, class R> ostream& operator<<(ostream &os, map<L,R> mp) {
    os << "PRINT MAP\n";
    for(auto pp:mp) os<<"("<<pp.ff<<":"<<pp.ss<<")\n";
    return os<<"";
}