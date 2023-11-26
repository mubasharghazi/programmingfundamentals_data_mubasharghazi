#include <iostream>
using namespace std;
int main()
{

  cout<<" || Simple Calculator to convert MB into Bytes ||"<<endl;  
  int mb,result;
  cout<<"Enter MB..."<<endl;
  cin>>mb; // Take Input From User
//   Calculate MB into Bits
  result = mb * (1024 * 1024) * 8; // 1byte = 8 bits, 1kb = 1024bytes, 1mb =1024kb
  cout<<mb<<" mb into bytes is = "<<result<<endl;
return 0;
}