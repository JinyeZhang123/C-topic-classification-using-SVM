class BigInt{
public:
  vector<int> value;
  int sign;

  void set(int n){
    value.clear();
    if(n==0){
      sign = 0;
      value.push_back(0);
    }