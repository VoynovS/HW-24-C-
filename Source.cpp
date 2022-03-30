#include <iostream> 
#include <string>


using namespace std;

string x(string x, char y);

int w(string s);

int w2(string s);

int w3(string s);

int w4(string s);

int count(string a);



int main() {
	string str;
	cout << "Task 1.\nEnter the word: ";
	getline(cin, str);
	cout << "Enter the symbol: ";
	char sym;
	cin >> sym;
	cout << "Answer: " << x(str, sym) << endl;

	cin.ignore();
	cout << "Task 2.1\nEnter the word: ";
	getline(cin, str);
	cout << w(str) << endl;

	cout << "Task 2.2\nEnter the word: ";
	getline(cin, str);
	cout << w2(str) << endl;

	cout << "Task 2.3\nEnter the word: ";
	getline(cin, str);
	cout << w3(str) << endl;

	cout << "Task 2.4\nEnter the word: ";
	getline(cin, str);
	cout << w4(str) << endl;

	cout << "Task 3.\nEnter the word: ";
	string word;
	getline(cin, word);
	cout << count(word);




	return 0;
}

//task 3
int count(string a) {
	int count = 0;
	for (int i = 0; i < a.length(); i++)
		if (a[i] == '!' || a[i] == '?' || a[i] == ' ' || a[i] == ',' || a[i] == '.')
			count++;
	return count;
}

//task 2
int w(string s) {
	if (equal(s.begin(), s.begin() + s.length() / 2, s.rbegin()))
		return true;
	else
		return false;
}

int w2(string s) {
	string s1 = s;
	reverse(s1.begin(), s1.end());
	if (s == s1)
		return true;
	else
		return false;
}

int w3(string s) {
	string s1;

	for (int i = s.length() - 1; i >= 0; i--) {
		s1.push_back(s[i]);
	}
	if (s == s1)
		return true;
	else
		return false;
}
int w4(string s) {
	string s2 = s;
	int s1 = s.length();
	int n = s1 - 1;
	for (int i = 0; i < (s1 / 2); i++) {
		swap(s[i], s[n]);
		n -= 1;
	}
	if (s2 == s)
		return true;
	else
		return false;
}

//Task 1
string x(string x, char y) {
	string res;
	for (int i = 0; i < x.length(); i++)
		if (x[i] == y)
			res += y;
	return res;
}