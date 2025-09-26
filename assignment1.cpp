#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#define ll long long
using namespace std;
ll A[12001]={};
ll B[12001]={};
ll C[12001]={};
ll D[12001]={};
void sangnt()
{
	for (int i=2;i<=12000;i++)
		if(A[i]==0)
			for (int j=i+i;j<=12000;j+=i)
				A[j]=1;
		
}
int main()
{
	sangnt();
	ll dem=1;
	for (int i=2;i<=12000;i++)
		if(A[i]==0)
		{
			B[dem]=i;
			dem++;
		}
		bool check=false;
	for (int i=1;i<dem;i++)
		for(int j=i+1;j<dem;j++)
			{
			for(int k=j+1;k<dem;k++)
				{
					if(B[i]*B[j]*B[k]>12000)
					{
						break;
						check=true;
					}
					C[B[i]*B[j]*B[k]]=1;
				}
			if (check==true)
			{
				check =false;
				break;
			}
			}
			
	ll dem1=1;
	for	(ll i=1;i<12001;i++)
		if(C[i]==1)
		{
			D[dem1]=i;
			dem1++;
		}
	ll n;
	cin>>n;
	if (C[n]==1)cout<<" co ";
		else 
			cout<<" khong ";
	cout<<endl;
	cout<<"phan tu thu 120 la "<<D[120]<<endl<<"B giao C co "<<dem1-1<<" phan tu";
	//for(int i=1;i<dem1;i++)cout<<D[i]<<" ";
	
	return 0;		
}
