//creating a helper function 
bool check_ab(char input[],int startIndex){
    if(input[startIndex]=='\0') //checking if the string is empty, in case it is, then the answer is true
        return true;
    //we are checking the string three characters at a time
    //if the string does not start with a, then our function returns false
    if(input[startIndex]!='a')
        return false;
    
    //this is the condition where the string is not 'a' or 'aa'
    if(input[startIndex+1]!='\0' && input[startIndex+2]!='\0'){
       //checking the condition of 'abb'
       if(input[startIndex+1]=='b' && input[startIndex+2]=='b'){
         return check_ab(input,startIndex+3);
       }
    }
    
    //if the string is 'a' or 'aa'
    return check_ab(input,startIndex+1);
}

bool checkAB(char input[]){
   bool ans; //creating a variable 
   ans = check_ab(input,0); //storing the result of the helper function in the variable
   return ans; //returning the variable
}
