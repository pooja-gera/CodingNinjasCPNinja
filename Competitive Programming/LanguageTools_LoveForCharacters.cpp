#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int count[3]={0,0,0}; //a,s,p order 
    int length;
    cin>>length;
    char input[length];
    for(int i=0;i<length;i++){
        cin>>input[i];
    }
    for(int i=0;i<length;i++){
        if(input[i]=='a'){count[0]++;}
        else if(input[i]=='s'){count[1]++;}
        else if(input[i]=='p'){count[2]++;}
    }
    cout<<count[0]<<" "<<count[1]<<" "<<count[2];
	return 0;
}
