matrix operator*(matrix b){
        matrix ans;
        for(int i = 0; i < MAXN; i++)
            for(int j = 0; j < MAXN; j++)
                for(int k = 0; k < MAXN; k++){
                    ans.mat[i][j] = ans.mat[i][j] + ((mat[i][k]%mod)*(b.mat[k][j]%mod))%mod; 
                    ans.mat[i][j] %= mod;
                }