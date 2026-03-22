// Define a function square that takes an int and returns its square.

int square(int);
int square(int x){
    int squareroot = x * x;
    return squareroot;
}

int main(int argc, char const *argv[])
{
    printf("Square root calulator\n");
    int result = square(4);
    printf("%d", result);
    return 0;
}
