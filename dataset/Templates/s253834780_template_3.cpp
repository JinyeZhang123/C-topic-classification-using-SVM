template<typename Elem>
Elem quick_power(Elem a,Elem b,Elem Mod){
	Elem ans=1;
	while(b){
		if(b&1){
			ans=One*ans*a%Mod;
		}