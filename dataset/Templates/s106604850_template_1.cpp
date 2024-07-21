template <typename T>
#define _HT template <typename H, typename... T>
#define _il inline
#define _in _il int in
#define _sc _il bool scan
_T T in(int c){T n=0;bool m=false;if(c=='-')m=true,c=gcu();
	do{n=10*n+(c-'0'),c=gcu();}