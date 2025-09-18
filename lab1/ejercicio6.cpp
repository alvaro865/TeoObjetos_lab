#include <iostream>

using namespace std;


int convertidor(int h,int m, int s){
    return (h*60*60)+(m*60)+s;
}
int main(){
    cout<<"el total en segundos es : "<< convertidor(2,15,32)<<endl;
    return 0;   
}