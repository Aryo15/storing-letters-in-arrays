#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    // Declare an array to store the letters
    char letters[sentence.length()];
    
    // Loop through the sentence and store each letter in the array
    for (int i = 0; i < sentence.length(); i++) {
        letters[i] = sentence[i];
    }
    
    // Print out the contents of the array
    cout << "The letters in the sentence are: ";
    for (int i = 0; i < sentence.length(); i++) {
        cout << letters[i] << " ";
    }
    cout << endl;
    
    return 0;
}
