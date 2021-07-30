#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int i, j, key, a[100], n;
  cout<<"Enter the number of elements"<<endl;
  cin>>n;
  cout<<"Enter the array"<<endl;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
  {
    key=a[i];
    j=i-1;
    while(j>=0&&a[j]>key)
    {
      a[j+1]=key;
      j--;
    }
    a[j+1]=key;
  }
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
  getch();
}
