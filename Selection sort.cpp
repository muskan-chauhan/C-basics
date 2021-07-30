#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int i, j, a[100], n, temp, min=0;
  cout<<"Enter the number of elements"<<endl;
  cin>>n;
  cout<<"Enter the array"<<endl;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
  {
    min=j;
    for(j=i+1;j<n;j++)
    {
      if(a[j]<a[min])
        min=j;
    }
    temp=a[min];
    a[min]=a[i];
    a[i]=temp;
  }
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
  getch();
}
  
