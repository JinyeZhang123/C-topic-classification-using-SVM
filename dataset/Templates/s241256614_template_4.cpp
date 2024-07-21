template<typename T,typename... Ts>
void input(T& a,Ts&... ts) {
    input<T>(a);
    input<T>(ts...);
}