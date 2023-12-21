#include "book.h"
#include <limits.h>
#include <ctime>
#include <iostream>
#include <cstdarg>

void printBook(const BOOK &book) {
	printf("Title: %s\n Author: %s\nCategory: %d\nPublication date: %d\nPrice: $ %8.2lf\n", 
		book.title, book.author, book.subject, book.year, book.price);
}
void initBook(BOOK& book) {

	char title[TITLE_SZ];
	std::cout << "Enter title: ";
	std::cin >> title;
	strcpy_s(book.title, TITLE_SZ, title);

	char author[AUTHOR_SZ];
	std::cout << "Enter author: ";
	std::cin >> author;
	strcpy_s(book.author, AUTHOR_SZ, author);

	int year = 0;
	std::cout << "Enter year: ";
	while (true) {
		std::cin >> year;
		if (year < -1200 || year > 2023) {
			std::cout << "Wrongt year! Try again: ";
			continue;
		}
		else {
			book.year = year;
			break;
		}
	}

	double price = 0.0;
	std::cout << "Enter price: ";
	while (true) {
		std::cin >> price;
		if (price < 0) {
			std::cout << "Wrongt! Price cannot be negative! Try again: ";
			continue;
		}
		else {
			book.price = price;
			break;
		}
	}
}
