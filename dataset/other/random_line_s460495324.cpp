    for(int i=1;i<=n;i++) {scanf("%d%d",&w[i],&k),w[i]+=(k==1)?t:-t,cnt+=w[i]/l; if(w[i]%l<0) cnt--; ((w[i]%=l)+=l)%=l;}
