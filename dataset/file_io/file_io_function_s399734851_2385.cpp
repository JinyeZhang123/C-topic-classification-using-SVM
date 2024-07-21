int main() {
    //std::ifstream in("0_normal_2");
    //std::cin.rdbuf(in.rdbuf());
    
    int N, K;
    std::cin >> N >> K;
    int K2 = K * 2;
    CumSum2D<int> cs(K2, K2);
    
    //Wは+KでBに変換可能
    //mod 2*Kを取って良い
    
    //1.叶えられる希望の最大値 = 必要な塗り方の重なりの最大値：imos法
    //塗り方は黒の塊の左下位置Bを代表にとる
    //一つの希望に対し、黒は最大5つの範囲が存在するが、Bは2つの範囲のいずれかに属する
    //これを場合分けして各範囲で足す手もあるが、大変
    
    //2.Bを決め、その場合に含まれる希望の数を累積和で数える
    //場合分けの代わりに、もう一つの範囲分にもaddしておく
    //Bは(0,0)~(K-1,K-1)のみ考えれば十分
    //この方が場合分けが少なくて楽
    
    for (int i = 0; i < N; i++) {
        int x, y;
        std::cin >> x >> y;
        char c;
        std::cin >> c;
        if (c == 'W') x += K;
        x = x % K2;
        y = y % K2;
        if(y >= K) {
            y -= K;
            x = (x + K) % K2;
        }