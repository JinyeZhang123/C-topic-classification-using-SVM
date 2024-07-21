class Prime{
  std::vector<bool> p;
  std::vector<int> ps;
public:
  Prime(){
    p = std::vector<bool>(m,true);
    p[0]=p[1]=false;
    for(int i=4;i<m;i+=2)
      p[i]=false;
    ps.push_back(2);
 