#include<iostream>
using namespace std;
int main (){

    int n,i=1,j,k;
    cin>>n;
    // while(i<=n)<--------------for 111
    // {                             222  
    //     j=1;                      333               
    //     while(j<=n)
    //     {
    //         cout<<i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    // while(i<=n)<---------------------123
    // {                                123
    //     j=1;                         123
    //     while(j<=n)
    //     {
    //         cout<<j;
    //         j=j+1;
    //     }
    //     cout<<"\n";
    //     i=i+1;
    // }

    // while(i<n)<--------------321
    // {                        321
    //     j=1;                 321
    //     while(j<=n)
    //     {
    //         cout<<n-j+1<<"\t";
    //         j=j+1;
    //     }
    //     cout<<"\n";
    //     i=i+1;
    // }
    // k=1;<------------------123
    // while(i<=n)            456
    // {                      789                         
    //     j=1;
    //     while(j<=n)
    //     {
    //         cout<<k;
    //         k=k+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    // while(i<=n)<------------------*
    // {                             **       
    //     j=1;                      ***
    //     while(j<=i)               ****   
    //     {
    //         cout<<"*";
    //         j=j+1;
    //     }cout<<endl;
    //     i=i+1;
    // }

   
                        
                        
                        
                        
    // while(i<=n) <----------- 1                  
    // {                        12
    //     j=1;                 123
    //     while(j<=i)          1234
    //     {                    12345
    //         cout<<j;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


            // 5
             //   1
              //  22
               // 333
               // 4444
               // 55555
    // while(i<=n)
    // {
    //     j=1;
    //     while(j<=i)
    //     {
    //         cout<<i;
    //         j=j+1;
    //     }cout<<endl;
    //     i=i+1;
    // }

                //1
                //23
                //345
                //4567
                //56789
    // int val;
    // while(i<=n){
    //     j=1,val=i;
    //     while(j<=i)
    //     {
    //         cout<<val;
    //         val=val+1;
    //         j=j+1;
    //     }cout<<endl;
    //     i=i+1;
    // }
    // while(i<=n)<------work in progress
    // {
    //     j=1;
    //     while(j<=i)
    //     {
    //         cout<<i;
    //     }
    // }
            // 1
            // 2   1
            // 3   2   1
            // 4   3   2   1

    // while(i<=n)
    // {
    //     j=1;
    //     while(j<=i)
    //     {
    //         cout<<i-j+1<<"\t";
    //         j=j+1;
    //     }cout<<endl;
    //     i=i+1;
    // }
 
// A    A   A   A
// B    B   B   B
// C    C   C   C
// D    D   D   D
//  while(i<=n)
//  {
//     j=1;
//     while(j<=n)
//     {
//         char ch='A'+i-1;
//         cout<<ch<<"\t";
//         j=j+1;
//     }cout<<endl;
//     i=i+1;
//  }
// A    B   C   D   E
// A    B   C   D   E
// A    B   C   D   E
// A    B   C   D   E
//  while(i<=n)
//  {
//     j=1;
//     while(j<=n)
//     {
//         char ch='A'+j-1;
//         cout<<ch<<"\t";
//         j=j+1;
//     }cout<<endl;
//     i=i+1;
//  }

// A   B   C   D   E
// F   G   H   I   J
// k   L   M   N   O
// P   Q   R   S   T
// char ch='A';
// while(i<=n)
// {
//     j=1;
//     while(j<=n)
//     {
       
//         cout<<ch<<"\t";
       
//         ch=ch+1;
//          j=j+1;
//     }
//     cout<<"\n";
//     i=i+1;
// }
// A    B   C   D
// B    C   D   E
// C    D   E   F
// E    F   G   H
// int val;
// while(i<=n)
// {
//     j=1,val=i+j-2;
//     while(j<=n)
//     {  
//         char ch='A'+val;
//         cout<<ch<<"\t";
//         val=val+1;
//         j=j+1;  
//     }cout<<endl;
//     i=i+1;
// }
// A
// B    B
// C    C   C
// D    D   D   D
// while(i<=n)
// {
//     j=1;
//     while(j<=i)
//     {
//         char ch='A'+i-1;
//         cout<<ch;
//         j=j+1;
//     }cout<<endl;
//     i=i+1;
// }
// A
// A    B 
// A    B   C
// A    B   C   D

// while(i<=n)
// {
//     j=1;
//     while(j<=i)
//     {
//         char ch='A'+j-1;
//         cout<<ch;
//         j=j+1;
//     }cout<<endl;
//     i=i+1;
// }
// A
// B    C   
// D    E   F   
// G    H   I   J
// char val='A';
// while(i<=n)
// {
//     j=1;
    
//     while(j<=i)
//     {
       
//         cout<<val;
//         val=val+1;
//         j=j+1;
//     }cout<<endl;
//     i=i+1;
// 
// D
// C    D 
// B    C   D
// A    B   C   D
// while(i<=n)
// {
//     j=1;int val=n-i;
//     while(j<=i)
//     {
//         char ch='A'+val;
//         cout<<ch;
//         val=val+1;
//         j=j+1;
//     }cout<<endl;
//     i=i+1;
// }
// char ch='A';<-------work in progress
// while(i<=n)
// {
//     j=1;int val=i-j;
//     while(j<=n)
//     {
//        ch=ch+val;
//         cout<<ch;
         
//          j=j+1;
//     }cout<<endl;
//     i=i+1;
// }
// while(i<=n)<--------work in progress 
// {
//     j=n;
//     while(j<=n)
//     {
//         char ch='A'+i-1;
//         cout<<ch;
//         j=j+1;
//     }cout<<endl;
//     i=i+1;
// }
//    *
//   **
//  ***
// while (i<=n)
// {
//     // space print 
//     int space= n-i;
//     while(space)
//     {
//         cout<<" ";
//         space =space - 1;
//     }
//      j=1;
//     while (j<=i )
//     {
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i +1;
// }
while(i<=n)
{
    while(j<=n)
    {
        cout<<"*";
    }
}

}