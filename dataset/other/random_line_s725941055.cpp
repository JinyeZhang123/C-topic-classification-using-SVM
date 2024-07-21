		for(int i=s;i>=x;i--)(f[i]+=(f[i-x]+f[i])%mo)%=mo;
