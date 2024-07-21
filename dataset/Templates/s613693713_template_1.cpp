template <typename T>
struct RUQ {
  T n;
  T k;//バケットの数
  T sqrt_n;//バケットの大きさ
  vector<T> data;
  vector<T> lazy_update;
  T INF;

  RUQ() = delete;
  RUQ(T n_,T sqrt_n_ = 1000,T INF_ = 1e9) {
    initialize(n_,sqrt_n_,INF_);
  }