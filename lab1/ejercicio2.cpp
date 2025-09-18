#include <iostream>
using namespace std;

bool verificar(int a,int b){
    if(a<b){
        return true;
    }else{
        return false;
    }
}
int main(){
    int array[10]; 
    int nuevo=0;
    for(int i=0;i<10;i++){
        cout<<"ingresar nuevo numero mayor: "<<endl;
        cin>>nuevo;
        
        if(i==0){
            array[i] = nuevo;
        }else if(i>0){
            bool ver =verificar(array[i-1],nuevo);
            while(!ver){
                cout<<"ingresar mayor a "<<array[i-1];
                cin>>nuevo;
                ver = verificar(array[i-1],nuevo);
            }
            array[i] = nuevo;
        }
        
        
    }
    

    return 0;

}