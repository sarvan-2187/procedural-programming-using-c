// CH.SC.U4CSE24130
// Program Name: A library has 5 shelves, and each shelf contains 4 different books. Use a 2D array to store the number of copies of each book on every shelf. Use a 1D array to store the total number of books on each shelf. Display: Copies of books shelf-wise. Total books on each shelf. Shelf with the maximum number of books.

#include <stdio.h>

#define NUM_SHELVES 5
#define BOOKS_PER_SHELF 4

int main(){
printf("CH.SC.U4CSE24130\n");

    int book_copies[NUM_SHELVES][BOOKS_PER_SHELF]; // 2D array for copies of each book on every shelf
    int total_books_on_shelf[NUM_SHELVES];         // 1D array for total books on each shelf

    // Input the number of copies for each book on each shelf
    printf("Enter the number of copies for each book on each shelf:\n");
    for (int i = 0; i < NUM_SHELVES; i++) {
        printf("\nShelf %d:\n", i + 1);
        total_books_on_shelf[i] = 0; // Initialize total for current shelf
        for (int j = 0; j < BOOKS_PER_SHELF; j++) {
            printf("  Copies of Book %d: ", j + 1);
            scanf("%d", &book_copies[i][j]);
            total_books_on_shelf[i] += book_copies[i][j]; // Add to shelf total
        }
    }

    // Display copies of books shelf-wise
    printf("\n--- Copies of Books Shelf-wise ---\n");
    for (int i = 0; i < NUM_SHELVES; i++) {
        printf("Shelf %d: ", i + 1);
        for (int j = 0; j < BOOKS_PER_SHELF; j++) {
            printf("Book %d = %d copies ", j + 1, book_copies[i][j]);
        }
        printf("\n");
    }

    // Display total books on each shelf
    printf("\n--- Total Books on Each Shelf ---\n");
    for (int i = 0; i < NUM_SHELVES; i++) {
        printf("Shelf %d Total Books: %d\n", i + 1, total_books_on_shelf[i]);
    }

    // Find and display the shelf with the maximum number of books
    int max_books = total_books_on_shelf[0];
    int max_shelf_index = 0;

    for (int i = 1; i < NUM_SHELVES; i++) {
        if (total_books_on_shelf[i] > max_books) {
            max_books = total_books_on_shelf[i];
            max_shelf_index = i;
        }
    }

    printf("\n--- Shelf with the Maximum Number of Books ---\n");
    printf("Shelf %d has the maximum number of books: %d\n", max_shelf_index + 1, max_books);

    return 0;
}

