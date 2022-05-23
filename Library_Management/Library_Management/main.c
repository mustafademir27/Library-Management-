#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

struct Books {
	char bookName[50];
	char authorName[50];
	int pageBook;
	int priceBook;
};
int main() {
menu:
	printf("---------------Main Menu---------------------\n\n");
	
	printf("1. Add books\n");
	printf("2. Display information of books\n");
	printf("3. Search books(books status)\n");
	printf("4. Exit\n");

	int chosen1;
	printf("Enter chosen1:");
	scanf("%d", &chosen1);

	if (chosen1 == 1) {
		printf("You can add new books\n");
		printf("Choose the category : \n");
		printf("1. Computer Science\n");
		printf("2. Electronics \n");
		printf("3. Mechanical\n");

		int chosen2;
		printf("Enter chosen2 :");
		scanf("%d", &chosen2);
		printf("\n\n");

		if (chosen2 == 1) {
			printf("You have chosen Computer Science Category\n\n");
			printf("1. Introduction to C\n");
			printf("2. Inroduction to Python\n");
			printf("3. Introduction to R programming\n");

			int chosen3;
			printf("Enter chosen3 :");
			scanf("%d", &chosen3);

			if (chosen3 == 1) {
				printf("You have chosen Introduction the C\n\n");
				struct Books book1;

				printf("Book Name:");
				scanf("%s", book1.bookName);
				printf("\n");

				printf("Author name:");
				scanf("%s", book1.authorName);
				printf("\n");

				printf("Page Book:");
				scanf("%d", &book1.pageBook);
				printf("\n");

				printf("Price book:");
				scanf("%d", &book1.priceBook);
				printf("\n");
				goto menu;
			}
			else if (chosen3 == 2) {
				printf("You have chosen Introduction the  Python\n\n");
				struct Books book2;

				printf("Book Name:");
				scanf("%s", book2.bookName);
				printf("\n");

				printf("Author name:");
				scanf("%s", book2.authorName);
				printf("\n");

				printf("Page Book:");
				scanf("%d", &book2.pageBook);
				printf("\n");

				printf("Price book:");
				scanf("%d", &book2.priceBook);
				printf("\n");
				goto menu;
			}
			else if (chosen3 == 3) {
				printf("You have chosen Introduction to R programming\n\n");
				struct Books book3;

				printf("Book Name:");
				scanf("%s", book3.bookName);
				printf("\n");

				printf("Author name:");
				scanf("%s", book3.authorName);
				printf("\n");

				printf("Page Book:");
				scanf("%d", &book3.pageBook);
				printf("\n");

				printf("Price book:");
				scanf("%d", &book3.priceBook);
				printf("\n");
				goto menu;
			}
		}
		else if (chosen2 == 2) {
			printf("You have chosen Electronics Category\n\n");
			printf("1. Practical Electronics for Inventors\n");
			printf("2. The Art of Electronics\n");
			printf("3. FUNDAMENTALS OF DIGITAL CIRCUITS\n");

			int chosen3;
			printf("Enter chosen3 :");
			scanf("%d", &chosen3);

			if (chosen3 == 1) {
				printf("You have chosen Practical Electronics for Inventors\n\n");
				struct Books book4;

				printf("Book Name:");
				scanf("%s", book4.bookName);
				printf("\n");

				printf("Author name:");
				scanf("%s", book4.authorName);
				printf("\n");

				printf("Page Book:");
				scanf("%d", &book4.pageBook);
				printf("\n");

				printf("Price book:");
				scanf("%d", &book4.priceBook);
				printf("\n");
				goto menu;
			}
			else if (chosen3 == 2) {
				printf("You have chosen The Art of Electronics\n\n");
				struct Books book5;

				printf("Book Name:");
				scanf("%s", book5.bookName);
				printf("\n");

				printf("Author name:");
				scanf("%s", book5.authorName);
				printf("\n");

				printf("Page Book:");
				scanf("%d", &book5.pageBook);
				printf("\n");

				printf("Price book:");
				scanf("%d", &book5.priceBook);
				printf("\n");
				goto menu;
			}
			else if (chosen3 == 3) {
				printf("You have chosen FUNDAMENTALS OF DIGITAL CIRCUITS\n\n");
				struct Books book6;

				printf("Book Name:");
				scanf("%s", book6.bookName);
				printf("\n");

				printf("Author name:");
				scanf("%s", book6.authorName);
				printf("\n");

				printf("Page Book:");
				scanf("%d", &book6.pageBook);
				printf("\n");

				printf("Price book:");
				scanf("%d", &book6.priceBook);
				printf("\n");
				goto menu;
			}
			else if (chosen2 == 3) {
				printf("You have chosen Mecanical Category\n\n");
				printf("1. Introduction to Autocad\n");
				printf("2. Fundamentals of Thermodynamics\n");
				printf("3. Mechanical Engineering : Conventional and Objective Type\n");

				int chosen3;
				printf("Enter chosen3 :");
				scanf("%d", &chosen3);

				if (chosen3 == 1) {
					printf("You have chosen Introduction to Autocad\n\n");
					struct Books book7;

					printf("Book Name:");
					scanf("%s", book7.bookName);
					printf("\n");

					printf("Author name:");
					scanf("%s", book7.authorName);
					printf("\n");

					printf("Page Book:");
					scanf("%d", &book7.pageBook);
					printf("\n");

					printf("Price book:");
					scanf("%d", &book7.priceBook);
					printf("\n");
					goto menu;
				}
				else if (chosen3 == 2) {
					printf("You have chosen Fundamentals of Thermodynamics\n\n");
					struct Books book8;

					printf("Book Name:");
					scanf("%s", book8.bookName);
					printf("\n");

					printf("Author name:");
					scanf("%s", book8.authorName);
					printf("\n");

					printf("Page Book:");
					scanf("%d", &book8.pageBook);
					printf("\n");

					printf("Price book:");
					scanf("%d", &book8.priceBook);
					printf("\n");
					goto menu;
				}
				else if (chosen3 == 3) {
					printf("You have chosen Mechanical Engineering : Conventional and Objective Type\n\n");
					struct Books book9;

					printf("Book Name:");
					scanf("%s", book9.bookName);
					printf("\n");

					printf("Author name:");
					scanf("%s", book9.authorName);
					printf("\n");

					printf("Page Book:");
					scanf("%d", &book9.pageBook);
					printf("\n");

					printf("Price book:");
					scanf("%d", &book9.priceBook);
					printf("\n");
					goto menu;
				}
			}

		}
	}
	else if (chosen1 == 3) {
		printf("You can search the book (book status) \n");
		printf("Press the code:123 for Introduction the C\n");
		printf("Press the code: 456 for Introduction the Python\n");
		printf("Press the code: 789 for Introduction the R programming\n");
		printf("Press the code: 147 for Practical Electronics for Inventors\n");
		printf("Press the code: 852 for The Art of Electronics\n");
		printf("Press the code: 963 for FUNDAMENTALS OF DIGITAL CIRCUITS\n");
		printf("Press the code: 369 for Introduction to Autocad\n");
		printf("Press the code: 258 for Fundamentals of Thermodynamics\n");
		printf("Press the code: 159 for Mechanical Engineering : Conventional and Objective Type\n");

		int code;
		printf("Enter book code :");
		scanf("%d", &code);

		switch (code) {
			case 123:
				printf("Book Name : Introduction the C\n");
				printf("Book status : 2 copies left\n");
				break;
			case 456:
				printf("Book Name : Introduction the Python\n");
				printf("Book status : 10 copies left\n");
				break;
			case 789:
				printf("Book Name : Introduction the R programming\n");
				printf("Book status : 2 copies left\n");
				break;
			case 147:
				printf("Book Name : Practical Electronics for Inventors\n");
				printf("Book status : 2 copies left\n");
				break;
			case 852:
				printf("Book Name : The Art of Electronics\n");
				printf("Book status : 2 copies left\n");
				break;
			case 963:
				printf("Book Name : FUNDAMENTALS OF DIGITAL CIRCUITS\n");
				printf("Book status : 2 copies left\n");
				break;
			case 369:
				printf("Book Name : Introduction to Autocad\n");
				printf("Book status : 2 copies left\n");
				break;
			case 258:
				printf("Book Name : Fundamentals of Thermodynamics\n");
				printf("Book status : 2 copies left\n");
				break;
			case 159:
				printf("Book Name : Mechanical Engineering : Conventional and Objective Type\n");
				printf("Book status : 2 copies left\n");
				break;
			default:
				printf("You entered the wrong code of book.\n\a");
				break;
			}
		goto menu;
	}
	else if (chosen1 == 4) {
	printf("Program is finished. \n");
	printf("Have a good day");
	} 
	return 0;
}