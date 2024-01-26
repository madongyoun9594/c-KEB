#include <iostream>
#include <limits>
using namespace std;

int main()
{
    long long num1 = numeric_limits<long long>::max();
    long long num2 = numeric_limits<long long>::min();


    cout << "long long number의 최댓값: " << num1 << endl;
    cout << "long long number의 최솟값: " << num2 << endl;
        
    
    return 0;

}


