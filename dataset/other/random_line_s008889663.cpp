long long a,b,k;main(){std::cin>>a>>b,k=a^b;if(k){for(;k!=(k&-k);k-=k&-k);for(a&=2*k-1,b&=k-1;b!=(b&-b);b-=b&-b);b=b?2*b-1:0,std::cout<<2*k-a+(b<a)*(b+1-a);}else puts("1");}
