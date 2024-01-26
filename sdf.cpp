#include <iostream>

using namespace std;

int main()
{
    // 변수설정
    int N_1;
    int N_2;

    cout << "숫자를 입력하세요: ";
    cin >> N_1;
    cout << "숫자를 입력하세요: ";
    cin >> N_2;


    if(N_1 > N_2)
        { 
            cout << "두 수중 더 큰 수는" << N_1 << "입니다";
        }    
    else
        {
            cout << "두 수중 더 큰 수는" << N_2 << "입니다";
        } 

    return 0;    



    
}


