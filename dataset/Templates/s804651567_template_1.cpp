template<typename T>
void insertion_sort(T in[],size_t size){
  T key;
  int j;
  auto show = [=]{
    for(int i=0;i<size-1;i++)cout << in[i] << ' ';
    cout << in[size-1] << endl;
  }