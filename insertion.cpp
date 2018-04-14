//PROGRAM OF INSERTION SORT USING C++
#include<iostream.h>
#include<conio.h>
void main()

{
	int a[20],i,j,k,l;
	cout<<"\n enter no of elements";
	cin>>l;
	for(i=0;i<l;i++)
	{
		cout<<"\n enter array element"<<i;
		cin>>a[i];
	}
	clrscr();
	for(i=0;i<l;i++)
	{
		cout<<"\n element number"<<i<<"is"<<a[i];
	}
	for(j=1;j<l;j++)
	{
		k=a[j];
		i=j-1;
		 while (i>=0&&a[i]>k)
		{
		 a[i+1]=a[i];
		 i=i-1;
		}
		a[i+1]=k;
	}
	cout<<"\n sorted array is";
	for(i=0;i<l;i++)
	{

	cout<<i<<"\n"<<a[i];

	}
	getch();
}
