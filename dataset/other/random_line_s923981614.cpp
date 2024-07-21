	return m<0||n<m?0:(ll)fac[n]*ifac[m]%mod*ifac[n-m]%mod;
