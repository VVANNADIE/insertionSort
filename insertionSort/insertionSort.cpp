#include <iostream>
#include <ctime>
using namespace std;

// Функция сортировки вставками
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Перемещение элементов массива, больших ключа, вправо на одну позицию
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    // Массив с 10 элементами
    int arr1[10];
    cout << "Массив с 10 элементами: ";
    for (int i = 0; i < 10; i++) {
        arr1[i] = rand() % 100;  // Заполняем случайными числами от 0 до 99
        cout << arr1[i] << " ";
    }
    cout << endl;

    clock_t start = clock(); // Запускаем таймер

    insertionSort(arr1, 10); // Применяем сортировку вставками к массиву

    clock_t end = clock(); // Останавливаем таймер
    double timeTaken = double(end - start) / CLOCKS_PER_SEC * 1000; // Вычисляем время выполнения в миллисекундах

    cout << "Отсортированный массив с 10 элементами: ";
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Время выполнения для массива с 10 элементами: " << timeTaken << " мс" << endl << endl;

    // Массив с 100 элементами
    int arr2[100];
    cout << "Массив с 100 элементами: ";
    for (int i = 0; i < 100; i++) {
        arr2[i] = rand() % 100;  // Заполняем случайными числами от 0 до 99
        cout << arr2[i] << " ";
    }
    cout << endl;

    start = clock(); // Запускаем таймер

    insertionSort(arr2, 100); // Применяем сортировку вставками к массиву

    end = clock(); // Останавливаем таймер
    timeTaken = double(end - start) / CLOCKS_PER_SEC * 1000; // Вычисляем время выполнения в миллисекундах

    cout << "Отсортированный массив с 100 элементами: ";
    for (int i = 0; i < 100; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "Время выполнения для массива с 100 элементами: " << timeTaken << " мс" << endl << endl;

    // Массив с 1000 элементами
    int arr3[1000];
    cout << "Массив с 1000 элементами: ";
    for (int i = 0; i < 1000; i++) {
        arr3[i] = rand() % 100;
        cout << arr3[i] << " ";
    }
    cout << endl << endl;
    start = clock(); // Запускаем таймер

    insertionSort(arr3, 1000); // Применяем сортировку вставками к массиву

    end = clock(); // Останавливаем таймер
    timeTaken = double(end - start) / CLOCKS_PER_SEC * 1000; // Вычисляем время выполнения в миллисекундах

    cout << "Отсортированный массив с 1000 элементами: ";
    for (int i = 0; i < 1000; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    cout << "Время выполнения для массива с 1000 элементами: " << timeTaken << " мс" << endl;

    return 0;
}