# COSC1430_Homework5

OVERVIEW

    This homework builds on HW4. We will modify the classes to do a few new things

    We will add copy constructors to the Antique and Merchant classes.
  
    We will overload the == operator for Antique and Merchant classes.
  
    We will overload the + operator for the antique class.
  
    We will add a new class the "MerchantGuild."
    
    Please use the provided templates for the Antique and Merchant classes, as we simplified their functionality for this homework. Also, you should use the provided main.cpp to test your classes.

Antique Class

    Overload the == operator:
        one antique is equal to another if the name and price are the same.
    
    Overload the + operator：
        sometimes you want to sell antiques together, such as fork and knife pair.
        
        Antique fork;
        Antique knife;
        fork.setName("fork");
        fork.setPrice(3.25);
        knife.setName("knife");
        knife.setPrice(2.25);
        Antique Silverware = fork + knife;
        Silverware.name = "fork and knife"
        Silverware.price = 5.50
    
Merchant Class

    Modify the class you implemented for Homework 4 to use dynamic arrays for holding antiques and their quantities.
    
    The default constructor will initialize things to zero or nullptr.
    
    The constructor with one value will initialize revenue to the float and everything else to zero or nullptr.
    
    The destructor will free all allocated memory (delete pointers and delete[ ] dynamic arrays).
    
    The copy constructor will perform a deep copy.
    
    Overload the assignment operator ( = ):
        this will work almost exactly like the copy constructor Except, there may already be allocated memory in the pointers you must delete first.

    Overload the == operator:
        one merchant is equal to another if:
            their revenue is equal
            they have the same number of antiques
            the antiques are the same and in the same order
            they have the same quantity of each antique

    Add an addAntique function:
        this is a void function that takes as arguments an antique object and an int quantity of that antique. It will add that antique and its quantity to the end of the respective dynamic arrays. The arrays will be 1 size larger after the addition.
        
MerchantGuild Class

    This class will hold a dynamic array of merchants of size guildSize. It also keeps track of the number of members it has.

    It has the following constructors:

        constructor with parameter size (with default value 10):
            sets guildSize to size, allocates members array and sets numMem to 0. If size < 1, use default value 10.
            
        copy constructor:
            this will perform a deep copy.

        Destructor:
            free the allocated memory

        Overloads the assignment operator (=):
            this works like the copy constructor except there is allocated memory you have to delete first.
            
    It has the following member functions:

        addMember:
            this is a void function that takes as an argument a Merchant object, adds it to the end of its array of members, and increases it the number of members by 1. if the array is full (numMem == guildSize), do not add the new member and print "Guild is full."

        getMembers:
            returns the pointer to the dynamic array.
            
note: the test cases are in the order of how they should be completed. In other words they build upon the last.

note: The main.cpp can be used for testing, but use the original template to pass the final test case.
