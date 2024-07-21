int main() {
#ifdef DBG
    ifstream cin("in.txt");
    std::cin.rdbuf(cin.rdbuf());
    //ofstream cout("out.txt");
    //std::cout.rdbuf(cout.rdbuf());
#else
    ios_base::sync_with_stdio(false);
    std::cin.tie(0);
#endif
    solve();
    return 0;
}