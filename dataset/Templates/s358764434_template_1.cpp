template<typename T>
auto print(std::vector<T> array,bool reverse = false) 
 -> void{
 	if(reverse){
		auto iterator = array.rbegin();
		std::cout<<*iterator;
		iterator++;
		for(;iterator != array.rend();++iterator){
			std::cout<<" "<< *iterator;
		}