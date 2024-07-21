template <class X>
void print_vector(const std::vector<X> &t){
  for(auto itr=t.begin(); itr != t.end(); itr++){
    std::cout << *itr;
    if(itr != t.end()-1) std::cout << ' ';
  }