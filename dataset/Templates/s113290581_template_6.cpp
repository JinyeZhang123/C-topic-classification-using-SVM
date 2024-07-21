template <class T>
bool Stack<T>::isFull(){
  if(element_num == max) return true;
  return false;
}