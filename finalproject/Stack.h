// Fig. 20.13: Stack.h
// Template Stack class definition derived from class List.
#ifndef STACK_H
#define STACK_H

#include "List.h" // List class definition

template< typename STACKTYPE >
class Stack : public List< STACKTYPE > 
{
public:
   // push calls the List function insertAtFront
   void push( const STACKTYPE &data ) 
   { 
      List< STACKTYPE >::insertAtFront( data ); 
   } // end function push

   // pop calls the List function removeFromFront
   bool pop( STACKTYPE &data ) 
   { 
      return List< STACKTYPE >::removeFromFront( data ); 
   } // end function pop

   // isStackEmpty calls the List function isEmpty
   STACKTYPE stackTop() const // check the top value
   {
      return !List< STACKTYPE >::isEmpty() ? List< STACKTYPE >::firstPtr->getData() : static_cast< STACKTYPE >( 0 );
   }
   bool isStackEmpty() const 
   { 
      return this->isEmpty();
   } // end function isStackEmpty
 
   // printStack calls the List function print
   void printStack() const 
   { 
        if ( this->isEmpty() ) // List is empty
   		{
      		cout << "The stack is empty\n";
      		return;
   		} // end if
   		
		cout << "The stack is: ";
        this->print();

   cout << "\n";
   } // end function print 
}; // end class Stack

#endif
