node operator+(node a,node b){
	node ans;ans.sz=a.sz+b.sz;ans.mx=a.mx+b.mx;
	if(a.mn>b.mn)swap(a,b);
	if(a.mx>b.mn)ans.mn=ans.mx&1;
	else ans.mn=b.mn-a.mx;return ans;
}