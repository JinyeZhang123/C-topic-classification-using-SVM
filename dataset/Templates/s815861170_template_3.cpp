template <typename T, typename... V>
  void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}