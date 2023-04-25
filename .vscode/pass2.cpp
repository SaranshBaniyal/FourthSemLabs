#include <iostream>
using namespace std;
#include <string>
#include <map>

int main() {
    string input = "hello world how are you world";
    map<string, int> wordFreq;
    
    // split the input string into individual words
    string delimiter = " ";
    size_t pos = 0;
    string token;
    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        input.erase(0, pos + delimiter.length());
        
        // increment the frequency count for the current word
        wordFreq[token]++;
    }
    
    // handle the last word in the input string
    wordFreq[input]++;
    
    // output the frequency counts for each word
    for (const auto& [word, freq] : wordFreq) {
        cout << word << ": " << freq << endl;
    }
    
    return 0;
}
