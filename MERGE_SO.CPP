#include<constream.h>

void merge(int *a,int s,int e){
	int mid=(s+e)/2,i=s,j=mid+1,k=s;
	int temp[100];
	while(i<=mid && j<=e){
		if(a[i] < a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=mid)
		temp[k++]=a[i++];
	while(j<=e)
		temp[k++]=a[j++];
	for(int l=0;l<e+1;l++)
		a[l]=temp[l];

}
void mergesort(int a[],int s,int e){
	if(s>=e)
		return ;
	int mid=(s+e)/2;
	mergesort(a,s,mid);
	mergesort(a,mid+1,e);
	merge(a,s,e);
}
void main()
{
clrscr();
int n;
cout<<"Enter the size of an array:";
cin>>n;
int a[100];
cout<<"Enter the elements:";
for(int i=0;i<n;i++)
	cin>>a[i];
mergesort(a,0,n-1);
cout<<"Sorted array is:";
for(i=0;i<n;i++)
	cout<<a[i]<<" ";
getch();
}