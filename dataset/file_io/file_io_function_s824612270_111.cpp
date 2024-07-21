int main(){
  //std::ifstream in("input.txt");
  //std::cin.rdbuf(in.rdbuf());
  int m,nmin,nmax;
  while(1){
    cin >> m>>nmin>>nmax;
    if(m==0 && nmin==0 && nmax==0){
      return 0;
    }