#include <iostream>

using namespace std;

int main()
{
    //변수설정
    int age;
    int license;
    bool possible;

    while (license == 1)
    { 
        cout << "면허가 있으면 1번 없으면 2번을 입력하세요: ";
        cin >> license;
        if(license == 1)
            {
            cout << "나이를 입력하세요 : ";
            cin >> age;
            
            possible = (age >= 20) && (age <= 80);

                if(possible)
                    {
                        cout << "대여가 가능합니다.";
                        break;
                    }
                    
                
                else
                    {
                        cout << "대여가 불가능합니다.";
                        break;
                    }
                 
            }         
        else
            {
                cout << "자격이 안됩니다.";
                break;
            }
               
        
    }
    return 0;

  



    
}


