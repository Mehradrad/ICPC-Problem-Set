#include <iostream>
#include <string>

// Difficulty rank : 900

void decoding()
{
    // taking the length of the encoded word
    int n;
    std::cin >> n;
    // taking the encoded word
    std::string s;
    std::cin >> s;

    // Declare and initialize the number of encoded characters left
    int encoded_remainder = n;
    // Declare the decoded word (output)
    std::string decoded_s;
  
    // Set all the characters of the decoded word to 'x' since we don't know yet what they are!
    for (int i{0}; i < n; i++)
        decoded_s.push_back('x');
    // Start Decoding 
    for(int i{0}; i < n; i++){
        if (encoded_remainder % 2 != 0) {
            decoded_s[(n - int(encoded_remainder/2)) - 1] = s[i];
        }else{
            decoded_s[int(encoded_remainder/2) - 1] = s[i];
        }
        encoded_remainder -= 1;
    }
    // print the decoded word (output)
    std::cout << decoded_s << std::endl;
}
 
int main()
{
    decoding();
    return 0;
}
