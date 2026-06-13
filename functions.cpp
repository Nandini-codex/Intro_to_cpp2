#include <iostream>
using namespace std;

// int sum ( int a , int b ) {
//     cout << a + b ;
// }

// int main() {
//     sum ( 897 , 6 ) ;

// } 


// long long factorial (int num) { 
// if (num == 0 || num == 1 ) { return 1; } 
// else { return num * factorial (num - 1 ) ; }
// } 

// int main() {
//     int num ;
//     cout << "Enter a number : " ;
//     cin >> num ;
//     cout << "The factorial of " << num << " is " << factorial (num) ; 
// }  

// int countdown ( int num ) { 
//     if ( num == 0 ) { return 0 ; }
//     else { cout << num << " " ; 
//     return countdown ( num - 1 ) ; }
// } 

// int main() {
//     int num ;
//     cout << "Enter a number : " ;
//     cin >> num ;
//     cout << "The countdown from " << num << " is : " ;
//     countdown (num) ; 
// }


// void multiply ( int a , int b ) { 
//     cout << a*b ; }

//     int main () {
//         int a = 5 , b = 4 ;
//         multiply (a,b) ; 
//     } 
      
bool isperfect ( int num ) { 
    int sum = 0 ;
    for ( int i = 1 ; i < num ; i++ ) { 
        if ( num % i == 0 ) { sum += i ; }
    }
    return sum == num ;
}

    int main() {
        int num ;
        cout << "Enter a number : " ;
        cin >> num ;
        if (isperfect (num) ) { cout << num << " is a perfect number." ; }
        else { cout << num << " is not a perfect number." ; }
    }   
