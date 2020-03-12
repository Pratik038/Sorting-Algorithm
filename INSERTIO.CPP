//Program on insertion sort.

#include<constream.h>

void main(){
clrscr();
int n;
cout<<"Enter the size of an array:";
cin>>n;
int a[100];
cout<<"Enter the elements in array:";
for(int i=0;i<n;i++)
	cin>>a[i];

for(i=1;i<n;i++){
	int temp=a[i];
	int j=i-1;
	while(j>=0 && a[j]>temp){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
}
cout<<"Sorted array is:";
for(i=0;i<n;i++)
	cout<<a[i]<<" ";
getch();
}
