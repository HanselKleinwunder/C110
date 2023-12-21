#include "book.h"
#include <limits.h>
#include <ctime>
#include <iostream>
#include <cstdarg>

void printBook(const BOOK& book) {
	printf("%s\nTitle: %s\nCategory: %s\Publication date: %d\nPrice: $ ", book.title, book.subject, book.year, book.price);
}