#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book 
{
public:
	//constructors
	Book();
	Book(string author, string title, string genre, int numPages);
	//destructor
	~Book();
	//getters
	string getData() const;
	string getAuthor() const;
	string getTitle() const;
	string getGenre() const;
	int getPages() const;

private:
	string author;
	string title;
	string genre;
	int numPages;
};
#endif