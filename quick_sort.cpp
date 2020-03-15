//Program of quicksort.
#include<iostream>
using namespace std;
int partition(int *a,int s,int e){
	int i=s,j=e,pivot_item=a[s];
	while(i<j){
		while(a[i]<=pivot_item)
			i++;
		while(a[j]>pivot_item)
			j--;
		if(i<j)
			{
				//swapping a[i] and a[j]
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	}
	//swapping a[s] and a[j]
	int temp=a[s];
	a[s]=a[j];
	a[j]=temp;
	return j;
}
void quicksort(int a[],int s,int e)
{
	if(s<e){
		int pivot=partition(a,s,e);
		quicksort(a,s,pivot-1);
		quicksort(a,pivot+1,e);
	}
}
int main()
{
	int n;
	cout<<"Enter the size of an array:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	quicksort(a,0,n-1);
	cout<<"Sorted array is:";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
