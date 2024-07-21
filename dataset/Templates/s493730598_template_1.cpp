template<class value_type>
class my_vector{
public:
  int imag_size;
  int real_size;
  value_type *array;
  my_vector(int n_){
    real_size = n_;
    imag_size = 1;
    while(real_size>imag_size)imag_size<<=1;
    array = new value_type[imag_size];
  }