int totalSum(int **input, int n)
{
    if(n==0){
        return 0;
    }
    
    //Write your code here
    int sum=0;
    
    for(int i=0;i<n;i++){
       //calculating sum of top row
       sum+=input[0][i];
       //calculating sum of left row
       sum+=input[i][0];
       //calculating sum of bottom row
       sum+=input[n-1][i];
        //calculating sum of right row
        sum+=input[i][n-1];
        
        //calculating sum of left diagonal
        sum+=input[i][i];
        
        //calculating sum of right diagonal
        sum+=input[i][n-1-i];
    }
    
    //subtracting the extra elements
    if(n%2==0)
        sum=sum-2*input[0][0]-2*input[0][n-1]-2*input[n-1][0]-2*input[n-1][n-1];
    else{
        int midele = n/2;
        sum=sum-2*input[0][0]-2*input[0][n-1]-2*input[n-1][0]-2*input[n-1][n-1]-input[midele][midele];
    }
        
    
    return sum;
}
