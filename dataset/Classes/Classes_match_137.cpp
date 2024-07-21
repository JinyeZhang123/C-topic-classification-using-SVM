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
    for(int i=3;i<m;i+=2){
      if(p[i]){
        ps.push_back(i);
        for(int j=i+i;j<m;j+=i)
          p[j]=false;
      }