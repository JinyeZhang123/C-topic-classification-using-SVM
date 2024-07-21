		for (int i=1;i<=n;i++) if (f[i]&(1ll<<k)) cnt=(cnt+y)%mod,--x;else cnt=(cnt+x)%mod,--y;
