class Baseball {
public:
    int score;                //得点
    int count;                //アウトカウント
    std::queue<int> runner;   //ランナー

    //コンストラクタ
    Baseball(int sc,int co){
        score = sc;
        count = co;
        while(!runner.empty()){
            runner.pop();
        }