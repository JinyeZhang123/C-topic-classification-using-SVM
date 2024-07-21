int main() {
    //std::ifstream in("in01.txt");
    //std::cin.rdbuf(in.rdbuf());
    
    long long l, r;
    std::cin >> l >> r;
    
    //x = sum_i=0^MSB(x) xb(i) * (1 << i)
    //y = sum_i=0^MSB(y) yb(i) * (1 << i)
    
    //y^x = sum_i=0^MSB(y) ((yb(i)+xb(i)) % 2) * (1 << i) = sum_i=0^MSB(y) ((yb(i)-xb(i)) % 2) * (1 << i)
    //y%x < x = sum_i=0^MSB(x) xb(i) * (1 << i)
    
    //y%x = y^x => MSB(y) = MSB(x) = d
    //y%x = y^x => y%x = y-x = y^x
    //y%x = y^x => yb(i) >= xb(i)
    
    //桁dp dp[i][el][er][msbf]上からi桁目で、l,rとx,yが一致しているか否か、msbはすでに立っているか、における暫定組み合わせ数
    vector<vector<vector<vector<long long>>>> dp;
    ndarray(dp, 64, 2, 2, 2);
    int msbr;
    for (msbr = 63; msbr >=0; msbr--) {
        if (((r >> msbr) & 1) == 1) break;
    }