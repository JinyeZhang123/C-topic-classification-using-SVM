pll operator-(pll a,pll b){
  pll ret;
  ret.first=a.first-b.first;
  ret.second=a.second-b.second;
  return ret;
}