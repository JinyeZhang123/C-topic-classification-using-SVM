template <class T>
void Stack<T>::push(T val){
  if(isFull()){
    printf("This Stack is full.\n");
    return;
  }