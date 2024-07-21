        ans=ans+Ca(n+i-1,i)*(quick_pow(A,n)*quick_pow(B,i)%mod+quick_pow(B,n)*quick_pow(A,i)%mod)%mod*cal(n,i)%mod;
