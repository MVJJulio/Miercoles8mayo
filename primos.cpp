#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Digite un numero entero positivo: ";
    cin>>n;
    int primo=1;// este es la hipotesis
    for (int i = n-1; i>=2; i=i-1){
        int modulo=n%i;
        if (modulo==0){
            cout<<n<<" no es primo\n";
            primo =0;
            break;  
    }}
    if (primo){
            cout<<n<<" es primo\n";
        }

    return 0;
};
