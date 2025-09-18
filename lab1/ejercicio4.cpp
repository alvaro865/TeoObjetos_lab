#include <iostream>

using namespace std;

double menor(double a,double b,double c){
    if(a<b && a<c){
        return a;
    }else if(b<a && b<c){
        return b;
    }else if(c<a && c<b){
        return c;
    }else{
        return 0;
    }
}
int main(){
    cout<<"el menor de 23,21,24 es : "<< 
    menor(23.0,21.0,24.0);
    return 0;
}