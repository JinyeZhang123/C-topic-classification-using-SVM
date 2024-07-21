ull sieve(){memset(prime,true,sizeof(prime));for(ull p=2;p*p<MAX;p++){if(prime[p]==true){for(ull i=2*p;i<MAX;i+=p){prime[i]=false;}}}prime[0]=0;prime[1]=0;
