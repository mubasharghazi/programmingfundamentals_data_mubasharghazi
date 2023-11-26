#include <iostream>
using namespace std;
int main()
{
  cout<<"|| Simple Speed Calculator ||"<<endl;
  int distance,speed,time;
  cout <<"Enter Distence in kilometers....  "<<endl;
  cin>>distance;
  cout <<"Enter Time in hours.... "<<endl;
  cin>>time;
  speed = distance / time ;
  cout<<"Speed = "<<speed<<endl;
return 0;
}