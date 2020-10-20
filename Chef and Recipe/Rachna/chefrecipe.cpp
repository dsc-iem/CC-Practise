#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void check(vector <int> &A,int N)
{
    vector <int> ingredient;
    vector <int> ingcount;
    int flag=0;
    for(int i=0;i<N;i++)
    {
        if((find(ingredient.begin(),ingredient.end(),A[i]))==ingredient.end())
        {
            ingredient.push_back(A[i]);
            int t=A[i];
            int c=0;
            while(A[i] == t)
            {
                if(i==N)
                    break;
                c++;
                i++;
            }
            i--;
            if((find(ingcount.begin(),ingcount.end(),c))==ingcount.end())
            {
                ingcount.push_back(c);
            }
            else
            {
                flag=1;
                break ;
            }
        }
        else
        {
            flag=1;
            break ;
        }
    }
    if(flag == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	    int N;
	    cin>>N;
	    vector<int>A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    check(A,N);
	    t--;
	}
	return 0;
}
