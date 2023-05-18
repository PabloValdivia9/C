#include <iostream>

using namespace std;

int main()
{   int j, k;
    for(j=1;j<=5;j++)
      {
        for(k=1;k<=j;k++)
           cout<<k;
        cout<<endl;
      }
    for(j=4;j>=1;j--)
      {
        for(k=1;k<=j;k++)
           cout<<k;
        cout<<endl;
      }
    return 0;
}
