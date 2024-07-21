template<typename T, typename ...Arg>
void __p(T a1, Arg ...a) { __p(a1); __p(a...); }