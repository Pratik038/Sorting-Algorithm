//Program on selection sort.

#include<constream.h>
void main(){
clrscr();
int n;
cout<<"Enter size of the array:";
cin>>n;
int a[100];
cout<<"Enter the elements of an array:";
for(int i=0;i<n;i++)
	cin>>a[i];

for(i=0;i<n-1;i++){
	int min=a[i];
	int pos=i;
	for(int j=i+1;j<n;j++){
		if(a[j]<min){
			min=a[j];
			pos=j;
		}
	}
	if(i!=pos){
		int temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;

	}

}
for(i=0;i<n;i++)
	cout<<a[i]<<" ";
getch();
}