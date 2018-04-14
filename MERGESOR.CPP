//PROGRAM OF MERGE SORT
#include<iostream.h>
#include<conio.h>
#define size 100

void merge(int a[],int,int,int);
void mergesort(int a[],int,int);

void main()
{
 int i,j,k,arr[size],n;
 clrscr();

 cout<<"Enter the number of Elements:";
 cin>>n;
 cout<<"\nEnter the Elements: ";
 for(i=0;i<n;i++)
  {
   cin>>arr[i];
  }

 mergesort(arr,0,n-1);
 cout<<"The sorted array:\n";
 for(i=0;i<n;i++)
  {
   cout<<" "<<arr[i];
  }
 getch();
}

void merge(int a[],int beg,int mid,int end)
{
 int temp[size],k;
 int index=beg;
 int i=beg;
 int j=mid+1;

 while(i<=mid && j<=end)
  {
   if(a[i]<a[j])
   {
	temp[index]=a[i];
	i++;
   }
   else
   {
	temp[index]=a[j];
	j++;
   }
  index=index+1;
  }

 if(i>mid)
 {
   while(j<=end)
   {
	temp[index]=a[j];
	index++;
	j++;
   }
 }
 else
 {
  while(i<=mid)
  {
   temp[index]=a[i];
   index++;
   i++;
  }
 }

 for(k=beg;k<index;k++)
 {
  a[k]=temp[k];
 }
}

void mergesort(int a[],int beg,int end)
{
 int mid;
 if(beg<end)
  {
   mid=(beg+end)/2;
   mergesort(a,beg,mid);
   mergesort(a,mid+1,end);
   merge(a,beg,mid,end);
  }
}