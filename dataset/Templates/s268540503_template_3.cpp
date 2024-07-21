template<typename T, typename... Args>
T Max(T a, Args... args){ return a > Max(args...)? a : Max(args...);}