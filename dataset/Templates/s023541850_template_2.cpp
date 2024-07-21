template<int n, class...T>
typename enable_if<(n< sizeof...(T))>::type
_ot(ostream &os, tuple<T...> const &t){
    os << (n==0?"":" ") << get<n>(t); _ot<n+1>(os, t);
}