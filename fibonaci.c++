#include <iostream>

int fibonaci(int number){
    if(number == 1 || number == 2){
        return 1;
    }
    else{
        return fibonaci(number-1)+fibonaci(number-2);
    }
}
int main(){
    std::cout << fibonaci(7);
    return 0;
}

