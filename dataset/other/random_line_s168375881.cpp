template<typename T, typename... Args> void print(T t, Args... args) { cout<<t<<" "; print(args...); }
