template<typename T>
auto insertionSort(std::vector<T> *A,int n,int g)
 -> void{
 	for(int i = g;i < n;i++){
 		auto v = (*A)[i];
 		auto j = i - g;
 		while(j >= 0 && (*A)[j] > v){
 			(*A)[j+g] = (*A)[j];
 			j = j - g;
 			cnt++;
 		}