# include <iostream>
using namespace std;

int main() {
// { int i = 1;

//   while (i <=10) { cout << "*" ; 

//    i ++ ;} } 


// { 

// for (int i = 1 ; i<=4 ; i++ )  { 
//     for ( int j=1 ; j<=4 ; j++) {
//         cout << i  ; }   


//         cout << endl ; 
//     }
// }
 

// { char num = 'A' ;
// for ( int row = 1 ; row <= 4 ; row++) {

//     for ( int col= 1 ; col <= 5 ; col ++) {
//          cout << num  << " " ;
//          num++ ; } 
//          cout << endl ; }
//     } 


// { int i = 1 ;
//  for (int j = 1 ; j<=4 ;  j++) { 
//     for ( int k = 1 ; k <= i ; k++ ) { 
//         cout << "*" ; }
//         i ++ ; 
//         cout << endl ;
//  }
// }  
// {
// int i = 1 ;
// for ( int j = 1 ; j<=i ; j++)
// {cout << "*" ; 
// }
// } 

// { for ( int i = 1 ; i <=4 ; i ++) {
//     for ( int j=1 ; j <= i ; j++ ) {
//         cout << i ;  }
//         cout << endl ; }
//     }        
  

 for ( int i = 1 ; i <= 8 ; i ++ ){ 

    for ( int j = 1 ; j <= (8-i) ; j ++) {
        cout << " " ; 

    }

    for (int k= 1; k <= (2*i -1 ) ; k ++ ) {
        cout << "*" ; 
    }
   cout << endl ; }
} 
    
      


