#include <iostream>

using namespace std;

int main()
{
    char array [26]= { 'a','b','c','d','e','f','g','h','i','j','k','l','m', 'n','o','p','q','r','s','t','u','v','w','x','y', 'z' };
        int x;
        while (x>0 ) {
         cin >>x;
         cout <<array [x-1];
        }

return 0;
}
