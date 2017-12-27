//    Лабараторная 1 ----------------------------------------------------
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//    double a, b, c, t, x, y;
//    printf("Enter a=");
//    scanf("%lf", &a);
//
//    printf("Enter b=");
//    scanf("%lf", &b);
//
//    printf("Enter c=");
//    scanf("%lf", &c);
//
//    printf("Enter t=");
//    scanf("%lf", &t);
//
//    printf("Your result x=%f\n", x = exp(-a*b) + cos(b));
//    printf("Your result y=%f\n", y = b * cos(t * sqrt(c) + b));
//}
//    Лабараторная 1 ----------------------------------------------------


//    Лабараторная 2 ----------------------------------------------------
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//    double a, b, x1 = 0.4, x2 = 2, dx = 0.2, y;
//
//    printf("Enter a = ");
//    scanf("%lf", &a);
//
//    printf("Enter b = ");
//    scanf("%lf", &b);
//
//    for ( ; x1 <= x2; x1 += dx ) {
//        if (x1 >= 1 && x1 <= 2) {
//            y = a * pow(a * x1, 2) * log(x1);
//            printf("x = %f\t y = %f\n", x1, y);
//        }
//        else if (x1 < 1) {
//            y = 1;
//            printf("x = %f\t y = %f\n", x1, y);
//        }
//        else if (x1 > 2) {
//            y = exp(a*x1) * cos(b*x1);
//            printf("x = %f\t y = %f\n", x1, y);
//        }
//    }
//}
//    Лабараторная 2 ----------------------------------------------------

    
//    Лабараторная 3 ----------------------------------------------------
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//    double a, x, n = 5;
//
//    printf("Enter a = ");
//    scanf("%lf", &a);
//
//    printf("Enter x = ");
//    scanf("%lf", &x);
//
//    for ( ; x <= n; x++ ) {
//        x+=a;
//        x*=x;
//        printf("x = %f\t a = %f\n", x, a);
//    }
//}
//    Лабараторная 3 ----------------------------------------------------


    
// Лабораторная 5 Сходящийся ряд ----------------------------------------
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//    double x, eps, result, step, ch, zn, i;
//
//    printf("Enter x = ");
//    scanf("%lf", &x);
//    printf("Enter epsilon = ");
//    scanf("%lf", &eps);
//
//    result = x;
//    step = x;
//    i = 2;
//    ch = x;
//    zn = 1;
//
//    while (fabs(step) > eps) {
//        ch = ch * x * x;
//        zn = zn * (i * ( i + 1 ));
//        step = ch / zn * (-1);
//        result = result + step;
//        i = i + 2;
//    }
//
//    printf("Result = %lf!\n", result);
//    printf("SIN(x) = %lf!\n", sin(x));
//    return 0;
//}
// Лабораторная 5 Сходящийся ряд ----------------------------------------



// Создание двухмерного динамического массива----------------------------
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int main() {
//    int *a;  // указатель на массив
//    int i, j, n, m;
//    system("chcp 1251");
//    system("cls");
//    printf("Введите количество строк: ");
//    scanf("%d", &n);
//    printf("Введите количество столбцов: ");
//    scanf("%d", &m);
//    // Выделение памяти
//    a = (int*)malloc(n*m * sizeof(int));
//    // Ввод элементов массива
//    for (i = 0; i<n; i++)  // цикл по строкам
//    {
//        for (j = 0; j<m; j++)  // цикл по столбцам
//        {
//            printf("a[%d][%d] = ", i, j);
//            scanf("%d", (a + i*m + j));
//        }
//    }
//    // Вывод элементов массива
//    for (i = 0; i<n; i++)  // цикл по строкам
//    {
//        for (j = 0; j<m; j++)  // цикл по столбцам
//        {
//            printf("%5d ", *(a + i*m + j)); // 5 знакомест под элемент массива
//        }
//        printf("\n");
//    }
//    free(a);
//    getchar();   getchar();
//    return 0;
//}
// Создание двухмерного динамического массива----------------------------

//-----------------------------------------------------------------------
//Задан целочисленный вектор А (10).
//Построить вектор В (10), приняв
//в качестве первых его компонент все отрицательные
//компоненты вектора А (с сохранением порядка следования),
//а в качестве остальных - все неотрицательные компоненты вектора А.
//Распечатать А и В.
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int main (){
//
//    int arrayA [10], arrayB [10], i, j;
//
//    srand(time(NULL));
//
//    for(i = 0; i < 10; i++) {
//        arrayA[i] = rand() % 10 - rand() % 10;
//    }
//    j=0;
//    for(i = 0; i < 10; i++)  {
//        if (arrayA[i] < 0) {
//            arrayB[j] = arrayA[i];
//            j++;
//        }
//    }
//    for(i = 0; i < 10; i++) {
//        if (arrayA[i] >= 0) {
//            arrayB[j] = arrayA[i];
//            j++;
//        }
//    }
//    printf("Array A ");
//    for(i = 0; i < 10; i++) {
//        printf("%d ", arrayA[i]);
//    }
//    printf("\n");
//    printf("Array B ");
//    for(i = 0; i < 10; i++) {
//        printf("%d ", arrayB[i]);
//    }
//    printf("\n");
//}
//-----------------------------------------------------------------------

//-----------------------------------------------------------------------
// Матрица размещена в одномерном массиве по строкам.
// Поменять местами К-й и L-й столбцы. Результат представить в виде матрицы
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int main () {
//    int rows = 5, columns = 3, columnToChange, columnToChangeWith;
//
//    int matrix [rows][columns], temp, i, j;
//    srand(time(NULL));
//
//    for (i=0; i<rows; i++) {
//        for (j=0; j<columns; j++) {
//            matrix[i][j] = rand() % 10;
//        }
//    }
//
//    printf("Исходный массив \n");
//    for (i=0; i<rows; i++) {
//        for (j=0; j<columns; j++) {
//            printf("%5d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("Какой столбец поменть местами? ");
//    scanf("%d", &columnToChange);
//    printf("С каким столбцом поменять? ");
//    scanf("%d", &columnToChangeWith);
//
//    printf("%d \t", columnToChange);
//    printf("%d \n", columnToChangeWith);
//
//    printf("Результирующий массив \n");
//    for (i=0; i<rows; i++) {
//        temp = matrix[i][columnToChange-1];
//        matrix[i][columnToChange-1] = matrix[i][columnToChangeWith-1];
//        matrix[i][columnToChangeWith-1] = temp;
//    }
//    for (i=0; i<rows; i++) {
//        for (j=0; j<columns; j++) {
//            printf("%5d", matrix[i][j]);
//        }
//        printf("\n");
//    }
//   printf("\n");
//}
//-----------------------------------------------------------------------


// Лабораторная 10-------------------------------------------------------
// Вычислить z = (s1 + s2)/(k1+k2),
// где s1 и k1 - сумма и количество положительных элементов массива X(N);
// s2 и k2 - сумма и количество положительных элементов массива Y(M).
//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//#include <cstdlib>
//
//using namespace std;
//
//int calculateSumAndQuantity(int * arrayA, int * arrayB, int K1, int K2);
//int fillArr (int * x, int length);
//int printArr (int * x, int length);
//int count (int * x, int length, int * S, int * P);
//int allocateMemory (int ** x, int * length);
//
//int main() {
//    int *arrayA, *arrayB, K1, K2, S1=0, S2=0, P1=0, P2=0;
//    srand(time(NULL));
//
//    allocateMemory(&arrayA, &K1);
//    fillArr(arrayA, K1);
//    printArr(arrayA, K1);
//
//    allocateMemory(&arrayB, &K2);
//    fillArr(arrayB, K2);
//    printArr(arrayB, K2);
//
//    count(arrayA, K1, &S1, &P1);
//    count(arrayB, K2, &S2, &P2);
//
//    cout << "z=" << (double)(S1 + S2)/(P1+P2) << endl;
//    delete []arrayA;
//    delete []arrayB;
//    return 0;
//}
//
//int fillArr (int * x, int length) {
//    for (int i = 0; i < length; i++) {
//        x[i] = rand() % 10 - rand() % 10;
//    }
//    return 0;
//}
//
//int printArr (int * x, int length) {
//    cout << "Ваш массив:  [ ";
//    for (int i = 0; i < length; i++) {
//        cout << x[i] << ", ";
//    }
//    cout << "] \n";
//    return 0;
//}
//
//int count (int * x, int length, int * S, int * P) {
//    for (int i = 0; i < length; i++) {
//        if (x[i] > 0) {
//            *S += x[i];
//            (*P)++;
//        }
//    }
//    return 0;
//}
//
//int allocateMemory (int ** x, int * length) {
//    cout << "Введите количество елементов массива: ";
//    scanf("%d", &*length);
//    *x = new int [*length];
//    return 0;
//}
// Лабораторная 10-------------------------------------------------------

// Лабораторная 11 ------------------------------------------------------
//#include <cstdlib>
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//
//int f1(int, int);
//int f2(int, int);
//
//using namespace std;
//
//int main(int argc, char **argv) {
//    int a, b;
//
//    cin >> a >> b;
//
//    cout <<"НОД делением: "<< f1(a, b) << endl;
//    cout <<"НОД вычитанием: "<< f2(a, b) <<endl;
//
//    return 0;
//
//}
//
//int f1 (int a, int b) {
//    while(a && b) {
//        if(a > b)
//            a = a % b;
//        else b = b % a;
//    }
//    return a + b;
//}
//int f2 (int a, int b) {
//    while(a != b) {
//        if(a > b)
//            a = a - b;
//        else b = b - a;
//    }
//    return a;
//}
// Лабораторная 11 ------------------------------------------------------


// Удаление дубликатов из массива ---------------------------------------
// the path to file:
// /Users/_____/Library/Developer/Xcode/DerivedData/FirstProject-fsohggjfmifnmqfnxawnzevjfzxy/Build/Products/Debug
// https://stackoverflow.com/questions/23438393/new-to-xcode-cant-open-files-in-c
// #include <cstdlib>
// #include <iostream>
// #include <fstream>
// #include <iomanip>
//
// using namespace std;
//
// struct Node {
//     int a, tmp;
//     int flag = 0;
//     struct Node *next;
// };
//
// Node *cur=NULL, *cur1=NULL, *head=NULL, *tail=NULL, *newN=NULL;
//
// void addNode (int);
// int printList ();
// int delNode (int);
// void freeList();
//
// int main(int argc, char **argv) {
//     fstream x;
//     int tmp;
//
//     x.open ("numbers.txt", ios :: in);
//
//     while (x.good()) {
//         x >> tmp;
//         addNode (tmp);
//     }
//
//     printList();
//     delNode(3);
//     delNode(2);
//     delNode(5);
//     cout << endl;
//     printList();
//     freeList();
//     printList();
//     return 0;
// }
//
// void addNode (int tmp) {
//     if (!head) {
//         head = new struct Node();
//         cur = tail = head;
//         cur1 = head;
//         head -> a = tmp;
//         head -> next = NULL;
//     }
//     else {
//         newN = new struct Node();
//         newN -> next = NULL;
//         newN -> a = tmp;
//         if (newN -> a < head -> a) {
//             newN -> next = head;
//             head = newN;
//         }
//         else if (newN -> a > tail -> a) {
//             tail -> next = newN;
//             tail = newN;
//         }
//         else {
//             cur = head;
//             while (cur -> a < newN -> a) {
//                 cur1 = cur;
//                 cur = cur -> next;
//             }
//             newN -> next = cur1 -> next;
//             cur1 -> next = newN;
//         }
//     }
// }
// int printList () {
//     if (!head) {
//         cout << "\nСписок пуст "<< endl;
//         return 1;
//     }
//     cur = head;
//     while (cur) {
//         cout << cur -> a << " ";
//         cur = cur -> next;
//     }
//
//     return 0;
// }
//
// int delNode (int tmp) {
//     int flag = 0;
//     cur = head;
//     cur1 = head;
//     while (cur -> a != tmp) {
//         cur1 = cur;
//         if (cur -> next) {
//             cur = cur -> next;
//         }
//         else {
//             flag = 1;
//             break;
//         }
//     }
//
//     if (flag) {
//         cout <<"Элемент не найден"<< endl;
//         return 1;
//     }
//     if (head != tail) {
//         if (cur == tail) {
//             delete tail;
//             tail = cur1;
//             tail -> next = NULL;
//         }
//         else if (cur == head) {
//             head = head -> next;
//             delete cur;
//         }
//         else {
//             cur1 -> next = cur -> next;
//             delete cur;
//         }
//     }
//     else delete head;
//
//     return 0;
// }
//
// void freeList() {
//     cur = head;
//     while(cur) {
//         cur1 = cur;
//         cur = cur -> next;
//         delete cur1;
//     }
//     head = NULL;
// }
// Удаление дубликатов из массива ---------------------------------------


// Сортировка Шелла -----------------------------------------------------
// #include <cstdlib>
// #include <iostream>
// #include <fstream>
// #include <iomanip>

// using namespace std;


// int main(int argc, char **argv) {
//  int SIZE = 20;
//  int i, j, temp;
//  int *x;

//  x = new int [SIZE];

//  srand(time(NULL));

//  for (i = 0; i < SIZE; i++)
//  x[i] = rand () % 50;

//  for (i = 0; i < SIZE; i++) {
//    cout << x[i] << " ";
//  }
//  cout << endl;

//  int step = SIZE / 2;

//  while (step) {
//    for (i = 0; i < (SIZE - step); i++) {
//      j = i;
//      while (j >= 0 && x[j] > x [j + step]) {
//        temp = x[j];
//        x[j] = x[j + step];
//        x[j + step] = temp;
//        j--;
//      }
//    }
//    step /= 2;
//  }

//  for (i = 0; i < SIZE; i++) {
//    cout << x[i] << " ";
//  }
//  cout << endl;
//  return 0;
// }
// Сортировка Шелла -----------------------------------------------------


// Сортировка. Слиянием -------------------------------------------------
//#include <cstdlib>
//#include <iostream>
//#include <fstream>
//#include <iomanip>
//
//using namespace std;
//
//const int SIZE = 10;
//
//void merge (int, int, int*, int*);
//
//int main(int argc, char **argv) {
// int SIZE = 20;
// int i, j, temp;
// int *x, *buf;
//
// x = new int [SIZE];
//
// srand(time(NULL));
//
// for (i = 0; i < SIZE; i++)
// x[i] = rand () % 50;
//
// for (i = 0; i < SIZE; i++) {
//   cout << x[i] << " ";
// }
// cout << endl;
//
// buf = new int [SIZE];
//
// merge (0, SIZE - 1, x, buf);
// for (i = 0; i < SIZE; i++) {
//   cout << x[i] << " ";
// }
// cout << endl;
//
// return 0;
//
//}
//
//void merge (int left, int right, int *x, int *buf) {
// if (right == left) return;
// if (right - left == 1) {
//   if  (x[right] < x[left])
//   swap (x[right], x[left]);
//   return;
// }
// int middle = (right + left) / 2;
// merge (left, middle, x, buf); //вызываем функцию рекурсивно и делимм массив влево каждый раз пополам
// merge (middle + 1, right, x, buf); //вызываем функцию рекурсивно после того, как доделим массив влево до последнего элемента
// int xleft = left; //итератор, который будет идти по левой половине
// int xright = middle + 1; //итератор, который будет идти по правой половине
// int cur = 0;
// while (right - left + 1 != cur) {
//   if (xleft > middle)
//   buf[cur++] = x[xright++]; // записываем весь хвост, данна яз апись заменяет запись: bur[cur] = x[xright]; cur++; xright++;
//   else if (xright > right)
//   buf[cur++] = x[xleft++];
//   else if (x[xleft] > x[xright])
//   buf[cur++] = x[xright++];
//   else
//   buf[cur++] = x[xleft++];
// } //переписываем из буфера в исходный массив
// for (int i = 0; i < cur; i++)
// x[i + left] = buf[i];
//}
// Сортировка. Слиянием -------------------------------------------------
