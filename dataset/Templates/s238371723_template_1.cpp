template <typename H, typename ...T> void qqbx(const char *s, const H &h, T&&...a) {
    for(; *s && *s != ','; ++s) if(*s != ' ') std::cerr<<*s;
    std::cerr<<" = "<<h<<(sizeof...(T) ? ", " : "\n");
    if constexpr(sizeof...(T)) qqbx(++s, a...);
}