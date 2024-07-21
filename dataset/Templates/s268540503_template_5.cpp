template<typename T, typename... Args>
T Min(T a, Args... args){ return a < Min(args...)? a : Min(args...);}