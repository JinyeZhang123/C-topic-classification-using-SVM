DP operator-(const DP& a){
        DP res(*this);
        res.t = (res.t-a.t+MOD)%MOD;
        res.dp = (res.dp * modinv(COM(res.t+a.t, res.t), MOD)%MOD);
        res.dp = (res.dp * modinv(a.dp, MOD))%MOD;
        return res;
    }