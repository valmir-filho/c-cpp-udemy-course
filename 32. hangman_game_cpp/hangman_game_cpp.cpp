#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    // Word to be guessed
    string secretWord = "elephant";
    
    // Variable initialization
    int attempts = 7;
    string guessedWord(secretWord.length(), '_');  // Initialize with underscores
    vector <char> wrongLetters;
    
    cout << "\nWelcome to the Hangman Game!\n";

    while (attempts > 0) {
        
        cout << "\nWord: " << guessedWord << endl;
        cout << "\nRemaining attempts: " << attempts << endl;
        cout << "\nWrong letters: ";
        
        for (int i = 0; i < wrongLetters.size(); i++) {
            char letter = wrongLetters[i];
            cout << letter << " ";  // Display wrong letters
        }
        
        cout << endl;

        char guess;
    
        cout << "\nEnter a letter: ";
        cin >> guess;

        // Check if the letter is in the secret word
        bool correctGuess = false;
 
        for (int i = 0; i < secretWord.length(); i++) {
            if (secretWord[i] == guess) {
                guessedWord[i] = guess;  // Reveal correctly guessed letters
                correctGuess = true;
            }
        }

        if (correctGuess) {
            cout << "\nCorrect! The letter '" << guess << "' is in the word." << endl;
        } else {
            cout << "\nWrong! The letter '" << guess << "' is not in the word." << endl;
            wrongLetters.push_back(guess);  // Add wrong guesses to the list
            attempts--;
        }

        // Check if the player has won
        if (guessedWord == secretWord) {
            cout << "\nCongratulations! You guessed the word: " << secretWord << "." << endl;
            break;
        }
    }

    if (attempts == 0) {
        cout << "\nGame over! You've run out of attempts. The word was: " << secretWord  << "." << endl;
    }

    cout << "\n";

    return 0;
}
