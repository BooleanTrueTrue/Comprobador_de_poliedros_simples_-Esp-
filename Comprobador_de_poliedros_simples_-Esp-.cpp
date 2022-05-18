#include <iostream>
#include <conio.h>

using namespace std;
    
    int x;
    int c;
    int v;
    int a;
    const int aux = 2;
    string msg1 = "Bienvenido a el comprobador de Poliedros simples. \n";    
    string msg2 = "\nIntroduzca el numero de caras: ";
    string msg3 = "\nIntroduzca el numero de vertices: ";
    string msg4 = "\nIntroduzca el numero de aristas: ";
    string msg5 = "\nEl poliedro es simple.";    
    string msg6 = "\nEl poliedro no es simple.";

int main()
{
    cout << msg1;
    cout << msg2;
    cin >> c;
    cout << msg3;
    cin >> v;
    cout << msg4;
    cin >> a;
    
    x = c + v - a;
    
    if (x == aux)
    {
      cout << msg5;  
    }
    
    else 
    {
      cout << msg6;  
    }

    getch();
    return 0;
}