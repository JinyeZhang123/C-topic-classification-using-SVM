Matrix operator^(int exp){
            Matrix res = GetIdentity(mHeight);
            while(exp > 0){
                if(exp & 1) res *= mData;
                mData *= mData;
                exp >>= 1;
            }