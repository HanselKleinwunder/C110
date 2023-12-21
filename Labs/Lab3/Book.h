#pragma once

enum Category {
	Physics,
	Cosmology
};

namespace book_array_size{
	const int AUTHOR_SZ = 100;
	const int TITLE_SZ = 100;
}

struct BOOK {
	char author[book_array_size::AUTHOR_SZ];
	char title[book_array_size::TITLE_SZ];
	int year;
	double price;
	Category subject;
};
void printBook(const BOOK& book);