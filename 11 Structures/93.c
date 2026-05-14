// Write a function where the studnet structure also has books they have borrowed inside,showing nested structure usage.

#include <stdio.h>

struct Book
{
    char title[100];
    char author[100];
    float price;
};

typedef struct Book Book;

struct Student
{
    char id[10];
    char name[50];
    char year[10];
    char grade;
    Book borrowed_books[3];
    int no_of_books;
};

typedef struct Student Student;
void increase_grade(Student *);
void decrease_grade(Student *);
void print_student(Student *);
void print_book(Book *);
int main(int argc, char const *argv[])
{
    Student stu1 = {.id = "CS001",
                    .name = "Ravi",
                    .year = "First",
                    .grade = 'B',
                    .no_of_books = 2,
                    .borrowed_books =
                        {
                            {.title = "The Selfish Gene",
                             .author = "DR. Richard Dawkins",
                             .price = 499.99},
                            {.title = "Why we sleep",
                             .author = "Mathew Walker",
                             .price = 399.99}}};

    printf("Welcome to our College\n");
    printf("Here are the student details:\n");
    print_student(&stu1);

    return 0;
}

void print_student(Student *stu)
{
    printf("\nThe student with %s name has id: %s and studies in %s year has achieved %c grade", stu->name, stu->id, stu->year, stu->grade);
    printf("\nHere are the books borrowed:");
    for (int i = 0; i < stu->no_of_books; i++)
    {
        print_book(&(stu->borrowed_books[i]));
    }
}
void print_book(Book *book)
{
    printf("\n%s is written by %s, and is sold for Rs%.2f", book->title, book->author, book->price);
}