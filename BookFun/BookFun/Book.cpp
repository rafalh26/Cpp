#include "Book.h"
#include <string>
#include <iostream>
using namespace std;

Book::Book()
{
	this->author = "author";
	this->title = "title";
	this->genre = "genre";
	this->numPages = 0;
}
Book::Book(string author, string title, string genre, int numPages)
{
	this->author = author;
	this->title = title;
	this->genre = genre;
	this->numPages = numPages;
}
//getters
string Book::getData() const
{
	char intStr[25];
	_itoa_s(numPages, intStr, 20, 10);
	string str = string(intStr);
	string data = author + title + genre + str +" pages";
	return data;
}
string Book::getAuthor() const
{
	return author;
}
string Book::getTitle()	const
{
	return title;
}
string Book::getGenre() const
{
	return genre;
}
int Book::getPages() const
{
	return numPages;
}
//destructor
Book::~Book()
{

}