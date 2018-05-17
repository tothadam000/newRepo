#include <iostream>

using namespace std;

char recurringCharacter(string);

int main()
{
    string str = "";
    cout << "Give the characters" << endl;
    getline(cin, str);

    cout << "Your chars:";
    for (int i = 0; i < str.size(); i++) {
    cout << str[i] <<",";
    }
    recurringCharacter(str);

    return 0;
}

char recurringCharacter(string str){
   /* char theRecurringCharacter = 0;
    int frequencyOfCharacters1 = 0;
    int frequencyOfCharacters2 = 0;*/
    int i, max, index;
    int array1[255] = {0};

    for(i = 0; str[i] != 0; i++){
       ++array1[str[i]];
    }

    max = array1[0];
    index = 0;
    for(i = 0; str[i] != '\0'; i++){
         if( array1[str[i]] > max)
         {
             max = array1[str[i]];
             index = i;
         }
    }
    cout << endl << "The recurring character is: " << str[index] << endl;

    return 0;
}




