#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cout << " x 좌표를 입력하시오. : ";
    cin >> x;

    cout << " y 좌표를 입력하시오. : ";
    cin >> y;


    if( x > 0 && y > 0)
        {
            cout << "1사분면에 위치합니다.";
        }    
    else if( x < 0 && y > 0 )
        {
            cout << "2사분면에 위치합니다.";
        }
    else if ( x < 0 && y < 0)
        {
            cout << "3사분면에 위치합니다.";
        }
    else
        {
            cout << "4사분면에 위치합니다.";
        }
    
    return 0;
    
  

}


