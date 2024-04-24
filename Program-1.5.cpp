#include<iostream>
using namespace std;

int main()
{
  int a[5],i;
  cout<<"My Name Is Krinshsmith Kava"<<endl;
  cout<<"En_no   220130318102"<<endl;
  cout<<"Enter the value of elements::"<<endl;
  for(i=0;i<5;i++)
  {
    cin>>a[i];
    if(a[i]<0)
    {
      cout<<"a[%d]::%d"<<i<<a[i]<<endl;
    }
  }
  return 0();
}
