			val[j]-=val[x],r=min(val[j]>>1,ans[x]),val[j]-=r<<1,ans[x]+=val[x]+ans[j]+r,val[x]=val[j];
