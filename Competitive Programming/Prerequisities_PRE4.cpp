#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n/2;i++){
        int sum = arr[i] + arr[n-i-1];
        int no_of_groups = sum/10;
        int no_of_people_left = sum%10;
        
        cout<<no_of_groups<<" "<<no_of_people_left<<endl;
    }
	return 0;
}
