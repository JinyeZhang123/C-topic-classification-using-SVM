template<class T> inline T lcm(const vector<T> &v){T r=v[0];brep(i,1,sz(v)-1)r=lcm(r,v[i]);return r;}
