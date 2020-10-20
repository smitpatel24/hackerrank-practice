#include<iostream.h>
#include<process.h>
#include<conio.h>
int bsearch(int [],int,int);
void main()
{
	clrscr();
	int arr[5],i,element,flag;
	cout<<"Enter the input of array:";
	cout<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"Enter input:";
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search:";
	cin>>element;
	flag=bsearch(arr,5,element);
	if(flag==0)
	{
		cout<<"Element does not exist:";
		exit(1);
	}
	else
	{
		cout<<"Element exists at"<<flag+1<<" position from beginning";
	}
	getch();
}
int bsearch(int ar[],int size,int ele)
{
	int beg,last,mid=0;
	beg=0;
	last=size;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(ar[mid]==ele)
		{
			return mid;
		}
		else if(ele<ar[mid])
		{
			last=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	}
	return 0;
}

