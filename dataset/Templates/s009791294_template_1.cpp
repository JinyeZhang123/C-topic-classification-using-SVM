template <typename T> void displayTmp(T tmp_time, int M){
  
  for(int i = 0; i < M; i++){
	cout << "tmp_time[" << i << "] = ";
	cout << tmp_time[i].first << " " << tmp_time[i].second << endl; 
  }