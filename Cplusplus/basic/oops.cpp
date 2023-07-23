#include<iostream>
using namespace std;

class bicycle {
    int engine = 5;
    public:
    void braking() {
        cout<<"bicycle have brake";
    }
};
int main() {
    bicycle b;
    b.braking();
    return 0;
}