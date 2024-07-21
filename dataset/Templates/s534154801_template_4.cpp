template <typename X, typename Y, typename Z, typename... Zs>
auto vectors(X x, Y y, Z z, Zs... zs) {
    auto cont = vectors(y, z, zs...);
    return vector<decltype(cont)>(x, cont);
}