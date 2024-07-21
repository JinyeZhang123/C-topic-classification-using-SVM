template<typename T> // T: type of cost
struct LCA {
  int n, root, l;
  vector<vector<int>> to;  // グラフ
  vector<vector<T>> co;    // コスト
  vector<int> dep;         // 根からの深さ
  vector<T> costs;         // コスト（距離）
  vector<vector<int>> par;  // ダブリング配列
  LCA(int n):n(n),to(n),co(n),dep(n),costs(n) {
    l = 0;
    while ((1<<l) < n) ++l;
    par = vector<vector<int>>(n+1,vector<int>(l,n));
  }