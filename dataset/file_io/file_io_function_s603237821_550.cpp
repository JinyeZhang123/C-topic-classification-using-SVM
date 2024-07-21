int main(){
    //ifstream cin("input.txt");
    bitset<NUM_LIMIT> isPrime;
    isPrime.set();  // set all bits to 1
    
    // input data
    int number;
    int max_num = 0;
    while(cin >> number){
        int cnt = 0;
        if (number > max_num){
            cnt = getNumOfPrimes(isPrime, max_num+1, number);
            max_num = number;
        }