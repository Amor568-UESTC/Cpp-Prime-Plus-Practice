#include<iostream>
#include<string>
#include<cstdlib>
#include<cctype>
#include<vector>
#include<fstream>
using namespace std;
const int NUM = 26;
vector<string> wordlist;


int main()
{
	char play;
	cout << "Will you play a word game?<y/n>";
	cin >> play;
	play = tolower(play);
	ifstream inFile;
	inFile.open("text.txt");
	while (play == 'y')
	{
		string target;
		inFile >> target;
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess secret word.It has " << length
			<< " letters, and you guess\n"
			"ont letter at a time. You get " << guesses
			<< " wrong guesses.\n";
		cout << "Your word: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "You already geussed that.Try again.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "Oh, bad guess!\n";
				guesses--;
				badchars += letter;
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(loc + 1);
				}
			}
			cout << "Your word: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Bad choices: " << badchars << endl;
				cout << guesses << " bad guesses left\n";
			}
		}
		if (guesses > 0)
			cout << "That's right!\n";
		else
		{
			cout << "Sorry, the word is " << target << ".\n";
			cout << "Will you play another?<y/n>";
			play = tolower(play);
		}
		cout << "Bye!\n";
	}
	inFile.close();
	return 0;
}