template <typename InputItr, typename T>
T gcd(InputItr first, InputItr last, T init) {
    for (; first != last; ++first) init = gcd(init, *first);
    return init;
}