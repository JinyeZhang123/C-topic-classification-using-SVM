template<typename T, typename... Args>
void err(T a, Args... args){ cout << a << ' '; err(args...); }