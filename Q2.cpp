#include <bits/stdc++.h>
using namespace std;

struct pair{
    int max;
    int min;
};

struct pair getminmax(int arr[],int low,int high){
       struct Pair minmax, mml, mmr, mid;
       mid = (low + high) / 2;
       mml = getMinMax(arr, low, mid);
       mmr = getMinMax(arr, mid + 1, high);

    // Compare minimums of two parts
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;

};
// Driver program to test above methods
int main()
{
	int arr[] = { 10, 4, 5, 8, 6, 11, 26 };
	int n = sizeof(arr) / sizeof(arr[0]);
	struct pair minmax=getminmax(arr,0,arrsize-1);
	cout<<minmax.min<<endl<<minmax.max<<endl;
	return 0;
}
