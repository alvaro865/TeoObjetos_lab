#include <iostream>

using namespace std;

double total(int h){
    double t=0;
    for(int i=0;i<h;i++){
        if(i==0){
            t += 3.00;
        }else{
            t += 0.50; 
        }
    }
    return t;
}
int main(){
    int horas = 0;
    cout<<"ingresa numero de horas"<<endl;
    cin>>horas;
    cout<<"el total es: "<<total(horas)<<endl;
}