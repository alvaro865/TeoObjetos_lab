#include <iostream>
using namespace std;

int suma(int a[], int tam){
    int var=0;
    for(int i=0;i<tam;i++){
        var += a[i];
    }
    return var;
}

int main(){
    int array[] = {1,2,3,4,5,6}; 
    cout<<"la suma de la lista es"<< suma(array,6)<<endl;

    return 0;

}