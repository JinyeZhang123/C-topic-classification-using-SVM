template <typename first>
#if defined(__has_cpp_attribute) && __has_cpp_attribute(nodiscard)
[[nodiscard]]
#elif defined(__GNUC__) &&                                                     \
    (__GNUC__ > 3 || __GNUC__ == 3 && __GNUC_MINOR__ >= 4)
__attribute__((warn_unused_result))
#endif // defined(__has_cpp_attribute) && __has_cpp_attribute(nodiscard)
static inline constexpr decltype(auto)
fix(first &&f) noexcept {
    return [f = std::forward<first>(f)](auto &&... args) {
        return f(f, std::forward<decltype(args)>(args)...);
    }