template <class T>
T Stack<T>::pop(){
  if(isEmpty()){
    printf("This Stack is empty.\n");
    return 0;
  }