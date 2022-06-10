#include <iostream>
float runningavg(float,float);
using namespace std;
int main()
{
int i=1;
float y;
float count;
cout<<"Enter the amount of numbers you want entered: "<<endl;
cin>>count;
while (i<=count)
{
  cout<<"please enter a number. "<<endl;
  cin>> y;
  cout<<"the average is: "<< runningavg(y,i)<<endl;
 
  i++;
}
return 0;
}
float runningavg(float x,float z)
{
  
  static float total=0;
  total+=x;
  float avg=total/z;
  return avg;
}
