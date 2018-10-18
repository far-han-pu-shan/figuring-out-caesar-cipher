/*
Author: Farhan Pushan
Course: CSCI-136
Instructor: maryash
Assignment: Lab6B

This project implements the Caesar cyper method.

it's quite awesome to think about.


worked a while on this. 
*/



#include <iostream>
#include <string>

using namespace std;


string encryptCaesar(string user_input, int rshift)
{
    string result = "";
    
    
    int length = user_input.length();
    
    for (int i = 0; i <= (length-1); i++)
    {
        if(((int) user_input[i]>=65 && (int) user_input[i] <= 90)|| ((int) user_input[i]>=97 && (int) user_input[i]<=122))
        
        {
            result += char(int(user_input[i]+ rshift));
      
        }
        else
        {
            result += user_input[i];
        }
        
        
        
    
    
    }
    return result;
}



int main()
{
    
    string user_input;
    int rshift;
    
    cout << "Enter plaintext: "  ;
    cin >> user_input;
    
           
    cout << "\nEnter shift: " ;
    cin  >> rshift;
            
    cout << "\nCiphertext: " << encryptCaesar(user_input, rshift);

    return 0;
}




------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

using namespace std;


char shiftChar(char c, int rshift)
{
    if((c >=65 &&  c <= 90) || ( c >=97 && c <=122))
    {
        result += int(c+ rshift);
      
    }
    else
    {
        result += c;
    }

}

string encryptCaesar(string user_input, int rshift)
{
    string result = "";
    
    
    int length = user_input.length();
    
    for (int i = 0; i <= (length-1); i++)
    {
       
       shiftChar(i, rshift)
        if(((int) user_input[i]>=65 && (int) user_input[i] <= 90)|| ((int) user_input[i]>=97 && (int) user_input[i]<=122))
        
        {
            result += char(int(user_input[i]+ rshift));
      
        }
        else
        {
            result += user_input[i];
        }
        
        
        
    
    
    }
    return result;
}



int main()
{
    
    string user_input;
    int rshift;
    
    cout << "Enter plaintext: "  ;
    cin >> user_input;
    
           
    cout << "\nEnter shift: " ;
    cin  >> rshift;
            
    cout << "\nCiphertext: " << encryptCaesar(user_input, rshift);

    return 0;
}
-------------------------------------------------------------------------------------------------------------------

char shiftChar(char c, int rshift)
{
    if(((int) c[i]>=65 && (int) c[i] <= 90)|| ((int) c[i]>=97 && (int) c[i]<=122))
    {
	(int(c[i]+ rshift));
    }
    else
    {
	c[i];
    }
    return 
}




























