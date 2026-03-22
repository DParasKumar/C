#include<stdio.h>
// An auto variable (Through auto keyword is usually omitted.)
void function(){
    int Autovar = 10;
    printf("The value of Autovar is %d", Autovar);
    // Autovar is destroyed here as it goes out of scope.
}
int main(int argc, char const *argv[])
{
    function();  //Calls function with auto variable
    // function() has finished; autoVar is no longer accessible.
    return 0;
}
