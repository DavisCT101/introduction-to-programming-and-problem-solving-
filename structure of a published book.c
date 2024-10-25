/*Name: Mucheke Davis Mwangi
Ref No: CT101/G/22766/24
book structure*/
#include <stdio.h>
#include <string.h>

struct book{
	char title[30];
	char author [30];
	int publicationYear ;
	char ISBN[14];//the character space was less by one
	float price;
};

int main (){
	struct book book1={"Introduction to c programming ","John Smith", 2022," 9780131103627", 49.99};
	//print the values
	printf(" title:%s\n",book1.title);
	printf("author:%s\n",book1.author);
	printf("publication year:%d\n",book1.publicationYear);
	printf(" ISBN:%s\n",book1.ISBN);
	printf("price:%.2f\n",book1.price);
	
//	the other variable to prompt the user to enter values
struct book book2;

     // Prompt user for input
    printf("\nEnter details for a new book:\n");
    printf("Title: ");
    fgets(book2.title, sizeof(book2.title), stdin);
    book2.title[strcspn(book2.title, "\n")] = 0; // it removes the newline character at the end

    printf("Author: ");
    fgets(book2.author, sizeof(book2.author), stdin);
    book2.author[strcspn(book2.author, "\n")] = 0; // Remove the newline character at the end

    printf("Publication Year: ");
    scanf("%d", &book2.publicationYear);
    getchar(); // Consume the newline character left in the input buffer

    printf("ISBN: ");
    fgets(book2.ISBN, sizeof(book2.ISBN), stdin);
    book2.ISBN[strcspn(book2.ISBN, "\n")] = 0; // Remove the newline character at the end

    printf("Price: ");
    scanf("%f", &book2.price);

    // Print the values of the fields
    printf("\nEntered Book:\n");
    printf("Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);
    printf("Publication Year: %d\n", book2.publicationYear);
    printf("ISBN: %s\n", book2.ISBN);
    printf("Price: %.2f\n", book2.price);

    return 0;
}



	
	