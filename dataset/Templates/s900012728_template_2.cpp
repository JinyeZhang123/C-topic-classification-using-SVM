template<typename T>
T ston(string& str, T& n){
  istringstream sin(str) ;
  T num ;
  sin >> num ;
  return num ;
}