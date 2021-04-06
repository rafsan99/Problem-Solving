#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int up=3,down=1,left=1;
    if(std::min(std::min(up,down),left)==left){
        cout<<"left";
    }
    else if(std::min(std::min(up,down),left)==down){
        cout<<"down";
    }
}
