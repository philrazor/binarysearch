#include <iostream>

using namespace std;

int search(int points[] ,int size ,int searchValue){
    
    int upperValue ;
    int lowerValue;
    int midValue = (upperValue + lowerValue)/2 ;


    for (int i=0 ;i<size ;i++) {
    cout << points[i] ;
    if ( searchValue <midValue ){
    int newUpperValue = midValue -1 ;
    cout << points[searchValue] << endl; 
    }
    if (searchValue > midValue){
    int newLowerValue = midValue + 1 ;
    cout << points[searchValue] << endl ;  
    }
    return searchValue ;

   }
}

int main(){

    int points [10] = {12 , 23 , 29 , 34 , 45 , 48 , 57 , 64 , 82 , 90 } ;
    int searchValue ;

    cout << "enter searchValue: " << endl;
    cin>>searchValue;
    
    int result = search(points , 10 , 45) ; 

}