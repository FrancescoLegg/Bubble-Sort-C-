#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    
    int numbers[]={6, 7, 1, 3, 2, 5, 4, 8};
    int temp;

    int arrLength = sizeof(numbers)/sizeof(numbers[0]);//length calculation
    
    cout<<"Pre"<<endl;

    for(int i=0; i<arrLength; i++){
        cout<<numbers[i]<<endl;
    }
    
    for(int i=0; i<arrLength; i++){
        for(int j=i+1; j < arrLength; j++){

            if(numbers[i] > numbers[j]){
                temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;

            }

        }

    }

    cout<<"Post"<<endl;

    for(int i=0; i<arrLength; i++){
        cout<<numbers[i]<<endl;
    }

    return 0;

}
