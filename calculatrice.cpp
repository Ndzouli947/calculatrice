#include <iostream>
#include <cmath>
#include<windows.h>

using namespace std;


void show_calculator()
{
    cout<<"-----------------------------------------"<<endl;
    cout<<"----                                  ---"<<endl;
    cout<<"-             SCIENTIFIC                -"<<endl;
    cout<<"-             CALCULATOR                -"<<endl;
    cout<<"---                                   ---"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      +     |      -      |      *     -"<<endl;
    cout<<"-     Add    |    Moins    |  Multi     -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      /     |      m      |      L     -"<<endl;
    cout<<"-   Division |     Mod     |     Log    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      S     |      C      |      p     -"<<endl;
    cout<<"-    Square  |    Cube     |    Power   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      s     |      c      |      t     -"<<endl;
    cout<<"-     sin    |     cos     |     tan    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      r     |      k      |      q     -"<<endl;
    cout<<"-  sq root   |    effacer  |    close   -"<<endl;
    cout<<"-----------------------------------------"<<endl;

}


void display_output(double answer)
{
    cout<<"-----------------------------------------"<<endl;
    cout<<"----                     ----------------"<<endl;
    cout<<"-     CURRENT           |     "<<endl;
    cout<<"-     OUTPUT IS:        |  "<<answer<<endl;
    cout<<"---                      ----------------"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      +     |      -      |      *     -"<<endl;
    cout<<"-     Add    |    Moins    |  Multi     -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      /     |      m      |      L     -"<<endl;
    cout<<"-   Division |     Mod     |     Log    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      S     |      C      |      p     -"<<endl;
    cout<<"-    Square  |    Cube     |    Power   -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      s     |      c      |      t     -"<<endl;
    cout<<"-     sin    |     cos     |     tan    -"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-      r     |      k      |      q     -"<<endl;
    cout<<"-  sq root   |    effacer  |    close   -"<<endl;
    cout<<"-----------------------------------------"<<endl;

}
int main()
{
    double num1 = 0.0;
    double num2 = 0.0;

    double answer = 0.0;
    char inp = '\n';
    bool converter = 0;
    while(inp != 'q')
    {
        if(converter == 1)//si nous voulons montrer une calculatrice de base
        {//nous prendrons deux entrées
            display_output(answer);
            cout<<"Enter le choix d'opération que vous voulez faire : ";
            cin>>inp;
            if(inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p')
            {
                num1 = answer;

                cout<<"Entrer num 2: ";
                cin>>num2;
            }
            else if(inp == 'k' || inp== 'q')
            {
                //ne prenez aucune entrées
            }
            else
            {
                num1 = answer;
            }

        }
        else// si nous voulons montrer une calculatrice de base
        {// nous prendons deux entrées
            show_calculator();
            cout<<"Entrer: ";
            cin>>inp;
            if(inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p')
            {
                cout<<"Entrer num 1: ";
                cin>> num1;

                cout<<"Entrer num 2: ";
                cin>>num2;
            }
            else if(inp == 'k' || inp== 'q')
            {
                //ne prenez aucune entées
            }
            else
            {
                cout<<"Entrer num 1: ";
                cin>>num1;
            }

            converter = 1;

        }

        switch(inp)
        {
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            answer = num1 / num2;
            break;
        case 'm':
            answer =   int(num1)  % int(num2);
            break;
        case 'L':
            answer = log(num1);
            break;
        case 'S':
            answer = num1*num1;
            break;
        case 'C':
            answer = num1*num1*num1;
            break;
        case 'p':
            answer = pow(num1,num2);
            break;
        case 's':
            answer = sin(num1);
            break;
        case 'c':
            answer = cos(num1);
            break;
        case 't':
            answer = tan(num1);
            break;
        case 'r':
            answer = sqrt(num1);
            break;
        case 'k':
            converter = 0;
            break;
        case 'q':
            break;
        default:
            cout<<"vous avez entrer une valeure invalide !! "<<endl;
        }

        system("cls");

    }
    return 0;
}