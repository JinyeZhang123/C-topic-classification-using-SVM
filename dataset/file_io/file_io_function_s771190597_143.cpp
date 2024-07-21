int main(void){

    //ifstream fin("input2.txt");

    int Case = 1;
    int maxWeight;
 
    //??????????????????
    while(fin >> maxWeight, maxWeight) {

        int n, sumWeight = 0;
        int w[1000], v[1000];
        int dp[1001] = {0}