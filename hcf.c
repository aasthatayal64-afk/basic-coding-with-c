//Q36: Write a program to find the HCF (GCD) of two numbers.
int main() {
    int a, b, i, hcf = 1;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf( "%d",&b);

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("%d", hcf);

    return 0;
}