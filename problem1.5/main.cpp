#include <iostream>

using namespace std;

int main()
{

int x;
cin>>x;
if(x%2==0 && (x%10==4||x%10==7)){
    cout<<"lucky even";
}
else if(x%2==0&&x%10!=4&&x%10!=7){
        cout<<"unlucky even";

}
else if(x%2!=0&&x%10!=4&&x%10!=7){
    cout<<"unlucky odd";
}
else{
    cout<<"lucky odd";
}




















    return 0;
}
