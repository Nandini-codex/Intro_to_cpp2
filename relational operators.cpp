// #include <iostream>
// using namespace std;
// int main() {

//     int marks;
//     cout << "enter your marks :" ;
//     cin >> marks ;

//     if (marks>90) {
//         cout<< "gift" <<endl ;

//     }
//  if (marks <= 90) {
//     cout << "punishment" ;
// } 

// int a=5 , b=15;
// cout << (a < b) ;

// int a = 10 , b = ++a ;
// cout << b << endl << a; 

// }


#include <iostream>
using namespace std;
int main() {

    // int a=39 , b=50 ;  
    // if ((a>37 )&& (b>48)) {
    //     cout << "we are going to the party" ;
    // }
   




    // int a =3 , b=4 , c=0 ;
    // if (a && b && c ++) {
    //     cout << "yeahh" ;
    // }

    //    int a =3 , b=4 , c=0 ;
    // if (a && b &&  ++c ) {
    //     cout << "yeahh" ;
    // }
 
 int a =3 , b=4 , c=0 ;
    cout << ((a>b) && (b>c) || (c != a));
 

    // SO HERE WE ARE USING THE BOLLENA EXPRESSION A>B IS FALSE SO 0 
    // 2ND CONDITION IS TRUE SO 1
    //  != NOT EQUAL TO  IS TRUE SO 1 
    //   SO 0 && 1 || 1
    //   0 || 1
    //   1 


    // int a =3 , b=4 , c=0 ;
    // cout << (a>b) && (b>c) || (c != a);

//  THESE 2 GIVE DIFFERENT RESULT , AS A BRACKET IS MISSING , SO IT ONLY PROCEESS 
// A>B FIRST THEN IT GIVES FALSE SO 0 , SINCE COUT IN NOT GIVEN TO OTHER EXPRESSIONS 
// IT ONLY RETUNS THE FIRST VALUE WHICH IS 0 

} 


 
