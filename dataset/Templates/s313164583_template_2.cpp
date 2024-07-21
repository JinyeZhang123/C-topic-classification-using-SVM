template<typename T>
auto println(std::vector<T> array) 
 -> void{
	for(auto v : array){
		std::cout<< v <<"\n";
	}