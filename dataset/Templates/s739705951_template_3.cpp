template<typename T>
void printA(vector<T> &printArray, char between = ' ') {
  int paSize = printArray.size();
  for (int i = 0; i < paSize; i++) { cerr << printArray[i] << between;}