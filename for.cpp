//Pedir un numero y mostrar los numeros pares menor o igual a ese numero
#include<iostream>
using namespace std;
int main(){
    int n; //Declaramos variable
    cout<<"Digite un numero entero positivo : ";
    cin>>n; //pedimos y guaradmos valor
    for (int i = 0; i <=n; i+=2){ //creamos un valor, le ponemos limite y en cuanto aumenta
        cout<<i<<"\n";//imprimir valores
    }
    return 0;
}