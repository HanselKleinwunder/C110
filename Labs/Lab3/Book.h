#pragma once

enum Category {
	Physics,
	Cosmology,
	Science_Literature
};

const int AUTHOR_SZ = 100;
const int TITLE_SZ = 100;

struct BOOK {
	char author[AUTHOR_SZ];
	char title[TITLE_SZ];
	int year;
	double price;
	Category subject;
};

void printBook(const BOOK &book);