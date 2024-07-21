long operator*(pll x,pll y) {
  long long xx=((topow(x.first)-1)%base)*((topow(y.second)-1)%base)%base;
  long long yy=((topow(x.second)-1)%base)*((topow(y.first)-1)%base)%base;
  long long zz=topow(N-1)%base;
  long long ww=(((topow(x.first)-1)%base)*((topow(y.second)-1)%base)%base)*(((topow(x.second)-1)%base)*((topow(y.first)-1)%base)%base)%base;
  return (xx*topow(N-1-x.first-y.second)%base+yy*topow(N-1-x.second-y.first)%base+zz-ww)%base;
}