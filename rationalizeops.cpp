#include<iostream>
#include<iomanip>
#include "rationalizeops.h"

/* The function takes a double precision floating point number, takes out the integral part, and from the remaining number tries to
construct the number backwards using fractions, whose amount of precision can be manipulated using varying values.
This function is useful in Competitive Programming Problems, where we need to rationalize the given number and there is no
specific function available for that. */

int* rationalize(double num){
    int * arr = new int[20];
    int counter = 0;
    arr[0] = (int)num;
    num = num - (int)num;

    counter++;

    for (int j =2; j < 10000000000000 && counter < 20; j++){
        double temp = 1.0/j;
        if (num>=temp) {
            num = num-temp;
            arr[counter++] = j;
        }
    } return arr;
}


/* This is the tester function, this function calls the rationalize function and then print the actual values as obtained from it
we can vary the precision value to obtain a given number in terms of fraction in multiple ways. */

void test_rationalize(double double_number){

    int precision_value;
    cout<<"\nSet Precision Value: ";
    cin>>precision_value;
    cout<<setprecision(precision_value);

    int * arr = rationalize(double_number);
    double temp = arr[0];
    
    for (int j=1; j<20; j++){
        if(arr[j] == 0)
            continue;
        cout<<"temp: "<<temp<<" , 1.0/"<<arr[j]<<" = "<<1.0/arr[j]<<"\n";
        temp += 1.0/arr[j];
    }
    cout<<"temp = "<<temp<<"\n";
    

}