ll bsum(ll u,ll b){ll ret=0;if(u<b)return u;while(u){ret+=u%b;u/=b;}return ret;}
