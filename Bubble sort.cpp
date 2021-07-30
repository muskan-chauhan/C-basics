#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int i, j, a[20], n, temp;
  cout<<"Enter the number of elements in the sequence"<<endl;
  cin>>n;
  cout<<"Enter the sequence"<<endl;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  for(i=0;i<n;i++)
    cout<<a[i];
  getch();
}
