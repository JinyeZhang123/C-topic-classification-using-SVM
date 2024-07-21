int main() {
  //ifstream in("input.txt");
  //cin.rdbuf(in.rdbuf());

  int A,B,K;
  cin>>A>>B>>K;

  for(int i=0;i<K;i++){
    if(i%2==0){
      if(A%2!=0){
        A-=1;
      }