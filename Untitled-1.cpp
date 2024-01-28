#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int numero;

    cout<<"introduce un numero: ";
    cin>>numero;

    if(numero == 0){
        cout<<"es cero";
    }else if(numero%2 ==0){
        cout<<"es par";
    }else{
        cout<<"es impar";
    }

    return 0;
}