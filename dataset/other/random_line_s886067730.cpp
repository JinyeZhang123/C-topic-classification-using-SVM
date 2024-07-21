	inline bool Ins(LL x){for(LL i=60;i>=0;i--)if(x&(1ll<<i)){if(!b[i]){b[i]=x;return true;}x^=b[i];}return false;}
