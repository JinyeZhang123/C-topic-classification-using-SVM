template <typename H,typename... T> _sc(H &h, T&&... t){return scan(h)&&scan(t...);}
