#include <stdio.h>
#include <string.h>
#include <math.h>
struct mobile
{
    char brand_name[15];
    int memory_size;
    int batter_life;
    float H;
    float W;
    float price;
};
// memory
void memory(struct mobile m[], int key) //By Anushka Khandelwal
{
    int extended;
    printf("Enter a size in gb that you want to add additionaly in the mobile memory :  ");
    scanf("%d", &extended);
    m[key].memory_size = m[key].memory_size + extended;
}
//display size
float display(struct mobile m[], int key) //By Akshita Deshmukh
{
    float disply = sqrt((m[key].H) * (m[key].H) + (m[key].W) * (m[key].W));
    return disply;
}
//searching
void search(struct mobile m[], char ch[]) //By Aditya Bopche
{
    int i, j, check = 0;
    int arr[5] = {0, 0, 0, 0, 0};
    //checks for similarities
    for (i = 0; i < 5; i++)
    {
        for (j = 0; m[i].brand_name[j] != '\0' && ch[j] != '\0'; j++)
        {
            if (m[i].brand_name[j] == ch[j])
            {
                arr[i]++;
            }
        }
        //if completely similar, print it
        if (arr[i] == strlen(m[i].brand_name))
        {
            printf("Your chosen brand '%s' is available with us.\n", m[i].brand_name);
            check = 1;
        }
    }
    //if not printed yet
    if (check == 0)
    {
        //find the one with max similarities
        int max = arr[0], max_index = 0;
        for (i = 1; i < 5; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                max_index = i;
            }
        }
        printf("The brand you searched for is not available with us.\n");
        //if more than half of it is similar, ask user whether they meant it
        if (max >= (strlen(m[max_index].brand_name)) / 2)
        {
            char response[5];
            printf("Perhaps,you meant %s?", m[max_index].brand_name);
            scanf("%s", response);
            if (strcmp(response, "yes") == 0)
            {
                printf("%s brand is available\n\n", m[max_index].brand_name);
            }
            else
            {
                printf("\nApologies, couldn't find your brand\n");
            }
        }
        else
        {
            printf("\nApologies, couldn't find your brand\n");
        }
    }
}
//discount
void discount(struct mobile m[], int key) //By Khushi Savaliya
{
    if (m[key].price >= 20000 && m[key].price <= 40000)
    {
        printf("\nCurrent price is %.2f Rs\n", m[key].price);
        m[key].price = m[key].price - (m[key].price) * (0.05);
        printf("\nAfter applying 5 percent discount new price become %.2f Rs\n\n", m[key].price);
    }
    else if (m[key].price > 40000)
    {
        printf("\nCurrent price is %.2f Rs\n", m[key].price);
        m[key].price = m[key].price - (m[key].price) * (0.10);
        printf("\nAfter applying 10 percent discount new price become %.2f Rs\n\n", m[key].price);
    }
    else
    {
        printf("\nCurrent price is %.2f Rs\n\n", m[key].price);
        printf("No discount applicable at this price range.\n\n");
    }
}
//sorting 1 function
void sort(struct mobile m[], int code) //By Ninad Kadu
{
    //code for sorting according to battery life
    if (code == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (m[i].batter_life > m[j].batter_life)
                {
                    struct mobile temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }
        printf("\nMobile phone in order of battery life are as following :\n");
        for (int i = 0; i < 5; i++)
        {
            printf("\n(%d) %s battery life is of %d Hours\n", i + 1, m[i].brand_name, m[i].batter_life);
        }
        printf("\nEnter a respective choice code to know the deatails of that mobile that you like most : ");
    }
    //code for sorting according to price
    if (code == 2)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (m[i].price > m[j].price)
                {
                    struct mobile temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }
        printf("\nMobile phone in order of their respective prices :\n");
        for (int i = 0; i < 5; i++)
        {
            printf("(%d) %s price of %.1fRs\n", i + 1, m[i].brand_name, m[i].price);
        }
        printf("\nEnter a respective choice code to know the details of that mobile that you like most : ");
    }
}
int main()
{
    struct mobile m[5] =
        {
            {"asus", 256, 10, 12.5, 6.2, 58000.0},
            {"oppo", 128, 8, 14.0, 7.0, 21500.0},
            {"samsung", 128, 9, 6.0, 12.0, 16400.0},
            {"iphone", 256, 7, 14.0, 6.5, 69900.0},
            {"oneplus", 256, 6, 13.0, 7.0, 42000.0}};
    //code for searching
    int code;
    char ch[10];
    printf("----------------------------------------------------------------------\n             WELCOME TO OUR MOBILE STORE \n----------------------------------------------------------------------\n");
    printf("Enter a Brand name of mobile you want like such as (samsung,iphone,oppo,oneplus and asus) : ");
    scanf("%s", ch);
    search(m, ch);
    //code for sorting
    printf("Choices for selected brand : \n");
    printf("Enter 1 for sorting according to battery backup\n");
    printf("Enter 2 sort according to price\n");
    printf("Enter a choice code for the way you want to sort your selected brand product : ");
    scanf("%d", &code);
    switch (code)
    {
    case 1:
        sort(m, code);
        break;
    case 2:
        sort(m, code);
        break;
    default:
        printf("Enter valid choice\n");
        break;
    }
    // code for extending memory
    int key;
    scanf("%d", &key);
    printf("\n\n");
    printf("You have choose %s mobile\n", m[key - 1].brand_name);
    printf("\n");
    printf("Current size of memory of %s mobile is  %d\n", m[key - 1].brand_name, m[key - 1].memory_size);
    memory(m, key - 1);
    printf("New size of memory of the mobile phone becomes : %d\n", m[key - 1].memory_size);
    //code for display size;
    printf("\nDisplay size of your mobile phone is %.2fcm\n", display(m, key - 1));
    //code for discount
    discount(m, key - 1);
    return 0;
}
