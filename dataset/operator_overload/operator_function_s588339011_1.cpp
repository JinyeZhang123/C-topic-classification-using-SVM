matrix operator*(const matrix &b){
        matrix c(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    c.cell[i][k]+=cell[i][j]*b.cell[j][k]%MOD;
                    c.cell[i][k]%=MOD;
                }