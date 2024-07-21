template <typename T, typename ...Args>void debug(T t, Args ...args) {cerr << t << " ";debug(args...);}
