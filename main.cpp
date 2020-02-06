/**
	100 x 100 random  integer  matrix multiplication
	
	Gabriel Avendaño
	Valentina Bernal
	Daniela Duque
**/



#include<stdio.h> //Header file
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include <chrono>


using namespace std;
using namespace std::chrono;


#define MAXROWS 100 
#define MAXCOLS 100 


int main()
{
    int random_matrix[MAXROWS][MAXCOLS];
    
    /* initialize random seed: */
    srand(static_cast<unsigned>(time(0)));
    
    // starting point 
    auto start = high_resolution_clock::now();
    
    
    /* generate random matrix ten times */
    for (int k=0 ;  k < 10 ; k++){
        for (int i=0;i<MAXROWS;i++){
            for (int j=0;j<MAXCOLS;j++){
                random_matrix[i][j]= rand() % 100;
            }
        }
    }
    
    // end point
    auto stop = high_resolution_clock::now(); 
    
    
    auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "Avarage time taken by function: "
         << duration.count() / 10.0 << " microseconds" << endl;
}