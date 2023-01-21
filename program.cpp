#include <math.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string printHelloWorld() {
    return "Hello, World";
}

float addTwoNumbers() {
    float num1, num2;
    cout << "Enter num1 & num2" << endl;
    cin >> num1 >> num2;
    return num1 + num2;
}

double areaOfACircle() {
    const double PI = 3.141592653589793238463;
    float radius;
    cout << "Enter the radius" << endl;
    cin >> radius;
    return PI * radius * radius;
}

double areaOfATriangle() {
    double base, height;
    cout << "Enter base and height" << endl;
    cin >> base >> height;
    return base * height / 2;
}

void swapVariables() {
    int var1, var2;
    cout << "Enter num1 and num2" << endl;
    cin >> var1 >> var2;
    int temp = var1;
    var1 = var2;
    var2 = temp;
    cout << "var1: " << var1 << " var2: " << var2 << endl;
}

void swapWithoutThirdVariabe() {
    int var1, var2;
    cout << "Enter num1 and num2" << endl;
    cin >> var1 >> var2;
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
    cout << "var1: " << var1 << " var2: " << var2 << endl;
}

void swapUsingXOR() {
    int var1, var2;
    cout << "Enter num1 and num2" << endl;
    cin >> var1 >> var2;
    var1 = var1 ^ var2;
    var2 = var1 ^ var2;
    var1 = var1 ^ var2;
    cout << "var1: " << var1 << " var2: " << var2 << endl;
}

void paisaToRupees() {
    int paisa;
    cout << "Enter Paisa" << endl;
    cin >> paisa;
    int rupees = paisa / 100;
    paisa = paisa % 100;
    cout << rupees << " rupees and " << paisa << " paisa" << endl;
}

int maxOfTwoNumbers() {
    int num1, num2;
    cout << "Enter num1 and num2" << endl;
    cin >> num1 >> num2;
    return max(num1, num2);
}

int maxOfThreeNumbers() {
    int num1, num2, num3;
    cout << "Enter num1, num2 and num3" << endl;
    cin >> num1 >> num2 >> num3;
    return max(num1, max(num2, num3));
}

string convertToUpperCase() {
    char ch;
    cout << "Enter a character" << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        return "The character is already uppercase";
    if (ch >= 'a' && ch <= 'z')
        return string(1, ch - 32);
    return "Invalid Character";
}

bool isLeapYear() {
    int year;
    cout << "Enter year" << endl;
    cin >> year;
    if (year % 4 == 0) {
        if (year % 400 == 0 || year % 100 != 0) {
            return true;
        }
    }

    return false;
}

bool isOdd() {
    int n;
    cin >> n;
    return n & 1;
}

string testAlphabet() {
    char ch;
    cout << "Enter a character" << endl;
    cin >> ch;

    if (ch >= '0' && ch <= '9')
        return "Number";
    vector<char> vowelArr{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count = count_if(begin(vowelArr), end(vowelArr),
                         [ch](const char& c) { return c == ch; });
    if (count)
        return "Vowel";
    return "Consonant";
}

void printToN() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
}

void printRange() {
    int low, high;
    cout << "Enter lower and upper range" << endl;
    for (int i = low; i <= high; i++) {
        cout << i << " ";
    }
}

int sumOfDigits() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int sum = 0;
    while (n != 0) {
        sum += n & 10;
        n /= 10;
    }
    return sum;
}

int GCDHelper(int n1, int n2) {
    if (n1 == 0)
        return n2;

    return GCDHelper(n2 % n1, n1);
}

int findGCD() {
    int num1, num2;
    cout << "Enter num1 and num2" << endl;
    cin >> num1 >> num2;
    return GCDHelper(num1, num2);
}

bool isPrime() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    if (n < 1)
        return false;
    if (n == 2 || n == 3)
        return true;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

// sum of its factors equal to the number
bool isPerfectNumber() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int factorSum = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            factorSum += i;
    }

    return factorSum == n;
}

void printFibonacciUptoN() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int a = 0, b = 1;
    for (int i = 0; b <= n; i++) {
        cout << a << " ";
        int t = a;
        a = b;
        b = t + b;
    }
}

bool isPalindrome() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int orgNum = n;
    int revNum = 0;
    while (n != 0) {
        revNum = revNum * 10 + n % 10;
        n /= 10;
    }

    return orgNum == revNum;
}

int getFactorial() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int fact = 1;
    for (int i = n; i >= 1; i--) {
        fact *= i;
    }

    return fact;
}

void factorsOfANumber() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    for (int i = 1; i < n; i *= 2) {
        if (n % i == 0)
            cout << i << " ";
    }
}

void multiplicationTable() {
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int linearSearch() {
    int num = 12;
    vector<int> v{2, 7, 3, 4, 9, 12, 54, 6, 56, 76};
    for (int i = 0; i < v.size(); i++) {
        if (num == v.at(i))
            return i;
    }
    return -1;
}

int binarySearch() {
    int num = 19;
    vector<int> v{2,3,6,8,9,12,14,16,18,19};

    int low = 0, high = v.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == num)
            return mid;
        else if (v[mid] > num)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    // cout << printHelloWorld();
    // cout << addTwoNumbers();
    // cout << areaOfACircle();
    // cout << areaOfATriangle();
    // swapVariables();
    // swapWithoutThirdVariabe();
    // swapUsingXOR();
    // paisaToRupees();
    // cout << maxOfTwoNumbers();
    // cout << maxOfThreeNumbers();
    // cout << convertToUpperCase();
    // cout << isLeapYear();
    // cout << isOdd();
    // cout << testAlphabet();
    // printToN();
    // printRange();
    // cout << sumOfDigits();
    // cout << findGCD();
    // cout << isPrime();
    // cout << isPerfectNumber();
    // printFibonacciUptoN();
    // cout << isPalindrome();
    // cout << getFactorial();
    // factorsOfANumber();
    // multiplicationTable();
    // cout << linearSearch();
    cout << binarySearch();
}