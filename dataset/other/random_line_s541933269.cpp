  function<int(int,int)> op = [&op](int a, int b){ return (b==0)?a:op(b,a%b);};
