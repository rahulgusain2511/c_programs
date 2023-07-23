#include <iostream>
using namespace std;
void one_to_10(int limit)
{
    if(limit == 11) {
        return;
    } else {
        cout<<limit<<endl;
        one_to_10(limit+1);
    }
}
int main()
{
    int i = 1;
    one_to_10(0);
}