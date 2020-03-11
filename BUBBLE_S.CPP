//program of bubblesort.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,arr[10],count=0;
cout<<"Enter the number of elements in the array:";
cin>>n;
cout<<"Enter the elements:";
for(int i=0;i<n;i++)
	cin>>arr[i];

	for(i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
		//to sort in descending order,change > to <.
			if(arr[j] > arr[j+1]){
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				count++;
			}
cout<<"The sorted array is:";
for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
cout<<endl<<"Number of swapping:"<<count;
getch();
}
