#if !defined PASSWORD_H
#define PASSWORD_H

#include "ListArray.h"
#include "ListArrayIterator.h"
using CSC2110::ListArrayIterator;
using CSC2110::text;
using CSC2110::ListArray;

class Password
{
   private:
      ListArray<String>* viable_words;  //the list of words that can still be the password
      ListArray<String>* all_words;  //the original list of words
      int len;  //the length of the first word entered is stored to check that all subsequent words have the same length

      //a private helper method to report the number of character matches between two Strings
      int getNumMatches(String* curr_word, String* word_guess);

   public:
		Password(); //constructor
		~Password(); //destructor
		void addWord (string* word); //add a word to possible passwords
		void guess (int try_password, int num_matches);
		int getNumberOfPasswordsLeft();
		void displayViableWords();
		int bestGuess();
		String* getOriginalWord (int index);

};

#endif
