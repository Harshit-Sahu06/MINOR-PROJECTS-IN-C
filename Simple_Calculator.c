#include<stdio.h>
#include<math.h>

double division(double, double);
double modulus(int, int);
void print_menu();
int main () {
    int choice;
    double first, second, result;
    while(1){
    print_menu();
    scanf("%d", &choice);

    if(choice == 7){
        printf("Thank You for using this calculator.\n");
        break;
    }
    if(choice < 1 || choice > 7){
        printf("Invalid Menu Choice\n");
        continue;
    }

    printf("\nEnter your first number: ");
    scanf("%lf", &first);
    printf("Enter your second number: ");
    scanf("%lf", &second);

    switch (choice)
    {
    case 1:  //Add
        result = first + second;
        break;
    case 2:   // subtract
        result = first - second;
        break;
    case 3:   // multiply
        result = first * second;
        break;    
    case 4: //divide
        result = division(first, second);
        break;
    case 5: // modulus
        result = modulus(first, second);
        break;
    case 6:    // power
        result = pow(first , second);
        break;
     }

    if(!isnan(result)){
        printf("The result of operation is: %.2f\n", result);
    }
}

    return 0;
}
double division(double a, double b){
    if(b==0){
        fprintf(stderr, "Invalid argument for second number");
        return NAN;                //NAN --> Not a number
    }else{
        return a/b;
    }
}
double modulus(int a, int b){
    if(b==0){
        fprintf(stderr, "Invalid argument for second number");
        return NAN;
    } else {
        return a%b;
    }
}

void print_menu(){
    printf("\n_________________________________\n");
    printf("\nWelcome to Simple Calculator.\n\n");
    printf("Choose one of the following options: \n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("\nNow enter your choice: ");
}