template<typename T> 
struct RUQ
{
    // pos は全体のノードを表す配列
    // lazy は遅延評価を行うための配列
    vector< T > pos, lazy; 
    int maxLimit;
    const ll MAXRUQ = 2147483647; // 2^31-1

    void Init(int _n){
        int limit = 1;
        while (limit < _n){
            limit *= 2;
        }