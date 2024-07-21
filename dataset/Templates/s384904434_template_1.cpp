template <typename T, typename OP> class LazySegmentTree {
public:
  using MERGE = function<T(T, T)>;
  using APPLY = function<T(T, OP)>;
  using MERGE_OP = function<OP(OP, OP)>;

  MERGE merge_data_func;
  APPLY apply_lazy_func;
  MERGE_OP merge_lazy_func;
  T elem_ident;
  OP op_ident;
  std::vector<T> data;
  std::vector<OP> lazy;
  int n, height;

  LazySegmentTree(MERGE f, APPLY g, MERGE_OP h, T elem_ident, OP op_ident)
      : merge_data_func(f), apply_lazy_func(g), merge_lazy_func(h),
        elem_ident(elem_ident), op_ident(op_ident) {}