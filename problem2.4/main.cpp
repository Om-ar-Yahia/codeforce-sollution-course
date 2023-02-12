#include <iostream>

using namespace std;

int main()
{
  int sum=0,num;
  while(num>=0){
        cin>>num;
        if(num<0){
            break;
        }else{
    sum=sum+num;}
  }
  cout<<sum;
    return 0;
}
