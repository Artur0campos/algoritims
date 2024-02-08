#include <iostream>

int contador(int num, int cont = 0){    
 if(num == cont ){
    std::cout << num;
 }
 else{
    if(num <= 1){
    std::cout << num;
 }
 else{
    cont += 1;
    std::cout << cont << std::endl;
    if(num == cont){
        return 0;
    }
    else{
        contador(num,cont);
    }    
  }
 }
 
}


int main(){
    contador(90);
    return 0;
}

