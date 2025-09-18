#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){
    int a[20000];
    int con=0;
    srand(time(NULL));
    for(int i=0;i<20000;i++){
        int ale = 1 + rand() % 6;
        if(ale == 6){
            con++;
        }
    }
    double fre=con/20000.0;
    cout<<"tiene una frecuencia de: "
    <<fre<<"\nsalio el 6 un total de :"<<con<<endl;
    

    return 0;
}