#include <iostream>
using namespace std;

int main()
{
    int menu;
    
    while(true)
    
        {
            cout <<  "1) 시작  2) 종료 : ";
            cin >> menu;
    
            if(menu == 1)
            {
                cout << "start" << endl;
                
            }
            else if(menu == 2)
            {
                cout << "terminate" << endl;
                break;
            }
            
        }

    return 0;

}


