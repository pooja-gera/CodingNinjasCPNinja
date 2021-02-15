int sum(int input[], int n) {
    if(n==1){
        return input[0];
    }
    else{
        int tsum=0;
        tsum = input[n-1] + sum(input,n-1);
        return tsum;
    }
    
    /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

}
