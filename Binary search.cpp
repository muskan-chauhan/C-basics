#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int arr[100], ele, size, i;
  cout<<"Enter the number of elements in the array"<<endl;
  cin>>size;
  cout<<"Enter the array"<<endl;
  for(i=0;i<size;i++)
    cin>>arr[i];
  cout<<"Enter the elements to be searched"<<endl;
  cin>>ele;
  int beg=0, last=size-1, mid;
  while(beg<=size)
  {
    mid=(last+beg)/2;
    if(arr[mid]==ele)
    {
      cout<<"Element found at position"<<mid+1<<endl;
      break;
    }
    else
    {
      if(ele.arr[mid])
        beg=mid+!;
      else
        last=mid-1;
    }
  }
  getch();
}
 
