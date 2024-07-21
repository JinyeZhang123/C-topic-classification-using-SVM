		while(l<r){mid=(l+r+1)/2;if(a[stk[mid]].x<=a[i].x){r=mid-1;b[i].r=stk[mid];}else l=mid;}
