#include <iostream>
#include<array> 
using namespace std;
int main(){
    int test[] = {1,3,4,5,4};

    array<int,5> test2{1,3,4,5,4};
    printf("%ld \n",sizeof(test)); 
    cout << test2.size() << endl;

    cout << *end(test) << endl;
    cout << *begin(test) << endl;
    // cout << *- << endl;
}
