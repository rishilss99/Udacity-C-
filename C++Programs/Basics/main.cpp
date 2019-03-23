#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;
int main(void)
{
    cout<<sizeof(char)<<endl;
    cout<<sizeof(long double)<<endl;
    cout<<FLT_MIN<<endl;
    cout<<INT_MIN<<endl;
    const int x =12.5;
    cout<<x;
}
