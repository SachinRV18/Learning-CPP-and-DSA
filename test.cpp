// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1, num2;
//     cout << "Enter the value of num 1: ";
//     cin >> num1;
//     cout << "Enter the value of num 2: ";
//     cin >> num2;
//     int sum = num1 + num2;
//     int difference = num1 - num2;
//     int product = num1 * num2;
//     int division = num1 / num2;
//     int modulus = num1 % num2;
//     cout << "The sum of num1 and num2 is " << sum << "\n";
//     cout << "The sum of num1 and num2 is " << difference << "\n";
//     cout << "The sum of num1 and num2 is " << product << "\n";
//     cout << "The sum of num1 and num2 is " << division << "\n";
//     cout << "The sum of num1 and num2 is " << modulus << "\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout << " Enter your age : ";
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "your age is " << age << " \nyou are eligible to vote ";
//     }
//     else
//     {
//         cout << "your age is " << age << "\nyou are not eligible to vote ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char ch;
//     cout << "Enter your letter: ";
//     cin >> ch;
//     if (ch >= 'a' && ch <= 'z')
//     {
//         cout << "Its lowercase" << "\n";
//     }
//     else if (ch >= 'A' && ch <= 'Z')
//     {
//         cout << "Its uppercase" << "\n";
//     }
//     else
//     {
//         cout << "Its invalid input" << "\n";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1, num2;
//     cout << "n1 =  ";
//     cin >> num1;
//     cout << "n2 =  ";
//     cin >> num2;
//     cout << ((num1 < num2) ? "number 1 is small" : "number 2 is small");
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int count = 1;
//     while (count <= 5)
//     {
//         cout << count << " ";
//         count++;
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int count = 1, num;
//     cout << "enter the number : ";
//     cin >> num;
//     while (count <= num)
//     {
//         cout << count << " ";
//         count++;
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "enter the number : ";
//     cin >> num;
//     for (int count = 1; count <= num; count++)
//     {
//         cout << count << " ";
//     }
//     cout << endl;
//     return 0;
// }

// // sum of numbers from 1 to n using for loop
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << "the sum is : " << sum;

//     cout << endl;
//     return 0;
// }

// // sum of numbers from 1 to n using While loop
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i = 1, sum = 0;
//     cout << "enter the value of n : ";
//     cin >> n;
//     while (i <= n)
//     {
//         sum += i;
//         i++;
//     }
//     cout << "the sum is : " << sum;

//     cout << endl;
//     return 0;
// }

// sum of odd numbers from 1 to n using for loop
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sum += i;
//         }
//     }
//     cout << "the sum is : " << sum;

//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int i = 1, sum = 0, n;
//     cout << "enter the value of n : ";
//     cin >> n;
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//         i++;
//     }
//     cout << "the sum is : " << sum;

//     return 0;
// }

// // do while loop
// #include <iostream>
// using namespace std;

// int main()
// {

//     int i = 1, n;
//     cout << "Enter the value of n : ";
//     cin >> n;
//     do
//     {
//         cout << " " << i;
//         i++;
//     } while (i <= n);

//     return 0;
// }

// Prime number or not
// do while loop
// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     bool isPrime = true;
//     cout << "Enter the value of n : ";
//     cin >> n;

//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime == true)
//     {
//         cout << " prime number";
//     }
//     else
//     {
//         cout << "Non prime number";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     int m = 2;
//     cout << "Enter the number n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }