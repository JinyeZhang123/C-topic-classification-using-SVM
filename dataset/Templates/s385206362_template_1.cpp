template<typename Head , typename... Tail>
void dbg(Head h , Tail... t){
	cerr << h << " ";
	dbg(t...);
}