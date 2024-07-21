template<class H,class...T>void puta(H&&h,T&&...t){cout<<h<<' ';puta(t...);}
