BigInteger operator+(BigInteger integer){
		reverse(number.begin(), number.end());
		reverse(integer.number.begin(), integer.number.end());
		
		int length = max(	integer.number.length(),
							number.length());
	
		int up=0;
	
		string sum="";
	
		for(int i=0;i<length;i++){
			int num1 = 0;
			if(i<integer.number.length()){
				num1 = integer.number[i]-'0';
			}