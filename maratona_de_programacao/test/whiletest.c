#include <stdio.h>

int main(){
    int arr[20]={1,2,3,4,5,6,666,1024,42,99,88},i=0;

    while(arr[i] !=42){
    printf("%i \n", arr[i]);
    i++;
    }
    sleep(2);
    return 0;
}

