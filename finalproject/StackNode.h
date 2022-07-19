// Exercise 20.12 Solution: StackNode.h
// Definition of class template StackNode.
#ifndef STACKNODE_H
#define STACKNODE_H

template< typename T > class Stack; // forward declaration

template < typename T >
class StackNode 
{
   friend class Stack< T >;
public:
   StackNode( const T & = 0, StackNode * = 0 );
   T getData() const;

   // set point to next stack node
   void setNextPtr( StackNode *nPtr ) 
   { 
      nextPtr = nPtr; 
   } // end function setNextPtr
   
   // get point to next stack node
   StackNode *getNextPtr() const 
   { 
      return nextPtr; 
   } // end function getNextPtr

private:
   T data;
   StackNode *nextPtr;
}; // end class StackNode

// member-function definitions for class StackNode
// constructor
template < typename T >
StackNode< T >::StackNode( const T &d, StackNode< T > *ptr )
{
   data = d;
   nextPtr = ptr;
} // end constructor

// get data
template < typename T >
T StackNode< T >::getData() const 
{ 
   return data; 
} // end function getData

#endif
