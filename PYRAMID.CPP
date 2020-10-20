/*
pyramid
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,lines;
	i=j=lines=0;
	cout<<"Enter lines :";
	cin>>lines;
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	getch();
}