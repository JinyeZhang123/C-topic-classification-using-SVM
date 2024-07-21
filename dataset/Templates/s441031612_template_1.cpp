template <typename T>
struct SegmentTreeLazy //デフォルトは区間変更区間合計
{
    int n;
    const T ex = 1 << 30; //dat 初期値(合計なので)
    const T em = 1 << 30; //lazy 初期値(updateするので)
    //lazyで一括更新をもって、datでqueryに対応する。weightはそのnodeが担当する下のnodeの数
    //lazyは上から下に伝搬する。datは区間で探して下から上にもらう。
    vector<T> dat, lazy, weight; //tree本体
    SegmentTreeLazy(vector<T> v){
        int x = 1;
        int i;
        n = v.size();
        while(x < n) x <<= 1;
        n = x; 
        dat.resize(2*n-1, ex); //tree本体
        lazy.resize(2*n-1, em); //遅延評価
        weight.resize(2*n-1, 0); //何node持ってるか
        for(i = 0;i < v.size();++i){
            dat.at(i + n - 1) = v.at(i);
            weight.at(i + n - 1) = 1;
        }