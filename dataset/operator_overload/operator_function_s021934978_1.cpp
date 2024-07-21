bool operator<(const qwq&a,const qwq&b){
	if(!a.a&&!b.a)return a.b<b.b;
	if(!a.a||!b.a)return a.a>b.a;
	return 1.*a.b/a.a<1.*b.b/b.a;
}