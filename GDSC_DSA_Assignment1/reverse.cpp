#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--)
        cout<<arr[i]<<" ";
        
}
int main() {
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        reverse(arr,n);
        cout<<"\n";
    }
    
	return 0;
}