 #include <stdio.h>

// Function to calculate the sum of digits
int getSumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to reverse a number
int getReverse(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = (reversedNum * 10) + (num % 10);
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num, digitSum, reversedDigitSum;

    printf("Enter a number: ");
    scanf("%d", &num);

    digitSum = getSumOfDigits(num);
    reversedDigitSum = getReverse(digitSum);

    if ((digitSum * reversedDigitSum) == num) {
        printf("%d is a Magic Number.\n", num);
    } else {
        printf("%d is not a Magic Number.\n", num);
    }

    return 0;
}
