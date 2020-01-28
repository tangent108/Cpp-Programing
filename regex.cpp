#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main(){
    string text1 = "This is truth";
    string text2 = "how are you baby.";
    string pattern = R"([\w+\s\w+]+)";
    regex reg(pattern); // pattern to match to cosecutive word one or more times
    regex phoneNumberPattern(R"(\(?\d{3}\)?(-|\s)?\d{3}(-|\s)?\d{4})"); // for search the phone number like (977) 867-5309

    if(regex_match(text1,reg)){
        cout << "Text1 matches pattern" << endl; //this statement executes

    }
    else
    {
        cout << "\nThe text does not matched.";
    
    }

    if(regex_match(text2,reg))
    {
        cout << "\nText2 matches pattern.";
    }
    else
    {
        cout << "\nThe text does not matches."; //This statement executes.
    }

    string text3 = "call me at (720) 691 3975 or 720-691-3975 or call me at 234-456-5674  9876754398";
    if(regex_search(text3,phoneNumberPattern)){
        cout << "\nPhone number found!"<<endl;
    }
    else {
        cout << "\nPhone number not found!"<<endl;
    }

    /*
    suppose if we want to extract some matches then below is the code to do so.

    */
   // the below code is extracting matches from text named text3.
   sregex_iterator cur_iterator(text3.begin(),text3.end(),phoneNumberPattern);
   sregex_iterator end_iterator; // by default this end iterator is initialized to an ending condition

   int numberOfMatches=0;

   while(cur_iterator!=end_iterator)
    {
        cout << cur_iterator->str() << endl;
        numberOfMatches++;
        cur_iterator++;
   }
   if(numberOfMatches)
   cout << numberOfMatches << " Phone Number Found.\n" << endl;
   else {
       cout << "\nPhone Number Not Found."<<endl;
   }

    return 0; 
}