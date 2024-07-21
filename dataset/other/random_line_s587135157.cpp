  int max=0;rep(i,sz){int now=0;while(A[i]%prime==0){now++;A[i]/=prime;}if(max<now)max=now;}return max;
