int operator<(vector<int> v1,vector<int> v2){
  rep(i,v1.size())
    if(v1[i]>v2[i]) return 0;
  return 1;
}