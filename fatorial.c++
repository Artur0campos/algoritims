#include <iostream>

int fatorial(int number){
    if(number <= 1){
        return 1;
    }
    else{
        return number * fatorial(number-1);
    }
   

    
    


}


int main(){
    std::cout << fatorial(5);
    return 0;
}