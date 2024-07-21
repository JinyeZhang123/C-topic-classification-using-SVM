template<class H, class... T> void read(H& h, T&... t) {
    read(h);
    read(t...);
}