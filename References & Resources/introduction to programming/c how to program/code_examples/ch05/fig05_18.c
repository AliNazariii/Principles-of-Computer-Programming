// Fig. 5.18: fig05_18.c
// Recursive factorial function.
#include <stdio.h>

unsigned long long int factorial( unsigned int number );

// function main begins program execution
int main( void )
{
   unsigned int i; // counter

   // during each iteration, calculate
   // factorial( i ) and display result
   for ( i = 0; i <= 21; ++i ) {
      printf( "%u! = %llu\n", i, factorial( i ) );
   } // end for
} // end main

// recursive definition of function factorial  
unsigned long long int factorial( unsigned int number )
{                                                      
   // base case                                        
   if ( number <= 1 ) {                                
      return 1;                                        
   } // end if                                         
   else { // recursive step                            
      return ( number * factorial( number - 1 ) );     
   } // end else                                       
} // end function factorial                            


/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
