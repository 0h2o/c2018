#include <stdio.h>

int pow(int number,int pow){
    int result=1;
    while(pow){
        result*=number;
        pow--;
    }
    return result;
}
int main() {
    for(int i=100;i<1000;i++){
        if (pow(i/100,3) +pow(i%100/10,3)+pow(i%10,3)==i){
            printf("%d\n",i);
        }
    }
    return 0;
}