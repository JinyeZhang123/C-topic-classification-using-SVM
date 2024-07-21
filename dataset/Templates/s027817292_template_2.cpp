template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args&&... args) {
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}