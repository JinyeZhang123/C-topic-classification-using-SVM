template<typename ...Args>
ostream& operator<<(ostream &os, const tuple<Args...> &t){
	print_tuple<tuple<Args...>, tuple_size<tuple<Args...>>::value>::print(t, os);
}