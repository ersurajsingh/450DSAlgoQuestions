#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int start,int end){
    if(start>=end)
        return;
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reversearray(arr,start+1,end-1);
}

void printarray(int arr[],n){
    for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    cout<<endl;

}
// Driver program to test above methods
int main()
{
	int arr[] = { 10, 4, 5, 8, 6, 11, 26 };
	int n = sizeof(arr) / sizeof(arr[0]);
	return 0;
}
