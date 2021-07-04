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
    char data[20];

} * bptr, books[5];
void librarian_input();
int check_ISBN(struct library *books);

int main()
{
    printf("Enter the book's information...\n ");

    librarian_input();

    return 0;
}
void librarian_input()
{

    for (int i = 0; i < 1; i++)
    {

        printf("\nEnter book number %d's name: ", i + 1);
        scanf("%s", &books[i].book_name);

        printf("\n\nEnter the book number %d's author's name: ", i + 1);
        scanf("%s", &books[i].author_name);

        printf("\n\nEnter the number of pages: ");
        scanf("%d", &books[i].num_page);

        printf("\n\nEnter the book number %d's Year of Publication: ", i + 1);
        scanf("%d", &books[i].year_pub);

        printf("\n\nEnter the book number %d's ISBN Code: ", i + 1);
        scanf("%ld", &books[i].ISBN_code);

        printf("\n\nEnter the book number %d's genre: ", i + 1);
        scanf("%s", &books[i].genres);
    }
    int check;

    check = check_ISBN(books);

    if (check == 1)
    {
        printf("ISBN Numbers are correct!!!");
    }
    else
    {
        printf("ISBN Numbers are incorrect!!!");
    }
    
}
int check_ISBN(struct library *books)
{

    int n, m, o;

    while (books[0].ISBN_code != 0)
    {
        books[0].ISBN_code /= books[0].ISBN_code;

        n++;
    }

    while (books[1].ISBN_code != 0)
    {
        books[1].ISBN_code /= books[1].ISBN_code;

        m++;
    }

    while (books[2].ISBN_code != 0)
    {
        books[2].ISBN_code /= books[2].ISBN_code;

        o++;
    }

    if (n || m || o == 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}