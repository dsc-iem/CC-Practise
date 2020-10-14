#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateLeft(int num, vector<int> arr) {
    int i=1;
    while(i<=num){
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
        i++;
    }
    return arr;
}


int main()
{
	int n,num_rotations,i,x;
	cout<<"\nEnter number of terms: "; cin>>n;
	vector<int> arr;
	for(i=0;i<n;i++){
		cout<<"\nEnter a number: "; 
		cin>>x;
		arr.push_back(x);
	}
	cout<<"\nOriginal Array:\n";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\nEnter number of times array is to be rotated: ";
	cin>>num_rotations;
	arr = rotateLeft(num_rotations,arr);
	cout<<"\nFinal array:\n";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}