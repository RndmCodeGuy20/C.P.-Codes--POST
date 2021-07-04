#include <stdio.h>
#include <conio.h>

struct library
{
    char book_name[30];   //done
    char author_name[30]; //done
    int num_page;         //done
    long int ISBN_code;   //done
    char genres[20];      //done
    int year_pub;         //done
    int book_num;         //done
    int rough;
};

int main()
{

    int num_books;
    int j = 0;

    printf("\n\nEnter the number of books: ");
    scanf("%d", &num_books);

    struct library books[num_books];

    for (j = 0; j <= num_books; j++)
    {

        printf("\n\nEnter the book's name: ");
        scanf("%s", &books[num_books].book_name);

        printf("\n\nEnter the book's author's name: ");
        scanf("%s", &books[num_books].author_name);

        printf("\n\nEnter the number of pages: ");
        scanf("%d", &books[num_books].num_page);

        printf("\n\nEnter the book's Year of Publication: ");
        scanf("%d", &books[num_books].year_pub);

        printf("\n\nEnter the books ISBN Code: ");
        scanf("%ld", &books[num_books].ISBN_code);

        printf("\n\nEnter the book's genre: ");
        scanf("%s", &books[num_books].genres);
    }
    return 0;
}