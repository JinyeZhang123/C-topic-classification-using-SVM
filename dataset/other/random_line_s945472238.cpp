void DFS(int set,int len){ans[set]=min(len,ans[set]);for(int i=0;i<n;i++)if(len+cnt[set][i]<ans[i])DFS(i,len+cnt[set][i]);}
