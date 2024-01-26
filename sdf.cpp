#include <iostream>

using namespace std;

int main()
{
    // 변수설정
    int T_S;
    // 입력
    cout << "점수를 입력하세요.: ";
    cin >> T_S;

    if(T_S >= 80)
        cout << "합격 입니다.";
    if(T_S < 80)
        cout << "불합격 입니다.";
    
    return 0;


}

