template<typename T, typename V>
typename enable_if<is_class<T>::value == 0>::type
fill_v(T & t, const V & v) { t = v; }