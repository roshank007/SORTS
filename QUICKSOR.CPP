#include<iostream.h>
#include<conio.h>
#define size 100

void part(int a[],int,int,int);
void quicksort(int a[],int,int);

void main()
{
	int i,j,k,arr[size],n,r,p;
	clrscr();
	cout<<"Enter the number of Elements:";
	cin>>n;
	cout<<"\nEnter the Elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	quicksort(arr,0,n-1);
	cout<<"The sorted array:\n";
	for(i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
	getch();
}
int part(int a[],int p,int r)
{ 	int x,i=0;
	x=a[r];
	i=p-1;
	for(int j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{   int temp;
			i=i+1;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		 }
			int temp=a[i+1];
			a[i+1]=a[r];
			a[r]=temp;

return i+1;



}


void quicksort(int a[],int p,int r)
{
 int mid;
 if(p<r)
  {
   mid=part(a,p,r);
   quicksort(a,p,mid-1);
   quicksort(a,mid+1,r);
  }
}