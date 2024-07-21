bool operator<(S a,S b){
	return a.h*a.h+a.w*a.w<b.h*b.h+b.w*b.w||(a.h*a.h+a.w*a.w==b.h*b.h+b.w*b.w&&a.h<b.h);
}