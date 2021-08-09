#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int a[20], size, ele, pos, i;
  cout<<"Enter the number of elements"<<endl;
  cin>>size;
  cout<<"Enter the elements to be inserted"<<endl;
  cin>>ele;
  
  for(i=0;i<m;i++)
    cin>>a[i];
  for(i=0;i<m;i++)
  {
    if(ele>a[i]&&ele<a[i+1])
      pos=i+1;
  }
  for(i=size-1;i>=pos;i--)
    a[i+1]=a[i];
  a[pos]=ele;
  size++;
  for(i=0;i<m;i++)
    cout<<a[i]<<" ";
  getch();
}
