#include <iostream>
using namespace std;
char toCharStr(int i){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    return (alphabet[i]);
}

string caesarCypherEncryptor(string str, int key) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int length = str.size();
    int* myNums = new int[length];
    string myString;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < alphabet.length(); j++){
            if (str[i] == alphabet[j]) {
                myNums[i] = j;
                break;
            }
        }
    }
    for(int x = 0; x < str.length(); x++){
        myNums[x] += key;
        while( myNums[x] > 25) {
            myNums[x] -= 26;
        }
        myString += toCharStr(myNums[x]);
    }

    return myString;
}

int main() {

    string str = "xyz";
    int key = 2;
    cout << (caesarCypherEncryptor(str,key));

}
