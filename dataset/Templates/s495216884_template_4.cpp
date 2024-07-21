template <typename ForwardIt>
constexpr typename iterator_traits<ForwardIt>::value_type
lcm(ForwardIt first, ForwardIt last)
{
    using val_t = typename iterator_traits<ForwardIt>::value_type;
    if (first == last) return static_cast<val_t>(0);
    val_t res = *first;
    while (++first != last) res = lcm(res, *first);
    return res;
}