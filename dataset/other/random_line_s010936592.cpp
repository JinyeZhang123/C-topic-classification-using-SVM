     if(i-pol[j]>=0 && pol[j]<N) ans[i]=min(ans[i-pol[j]]+ans[pol[j]],ans[i]);
