//
// Created by wyq on 2/24/16.
//
#include <iostream>
#include <set>
#include <vector>
#include <list>

using namespace std;

/*---------------------------------------quick sort---------------------------------------------*/
void quickSort(int *arr, int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    /* partition */
    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };

    /* recursion */
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int partition(int *arr, int start, int end) {
    int location = start;
    int pivot = arr[location];
    int index = start;
    for (int i = start; i < end; ++i) {
        if (arr[i] < pivot) {
            index ++;
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }

    arr[location] = arr[index];
    arr[index] = pivot;
    return index;
}
//[start, end)
void qsort(int *arr, int start, int end) {
    if (start < end) {
        int pivot = partition(arr, start, end);
        qsort(arr, start, pivot);
        qsort(arr, pivot + 1, end);
    }
}


/*---------------------------------------bubble sort---------------------------------------------*/
void bubbleSort(int *arr, int start, int end) {
    for (int i = start; i < end; ++i) {
        for (int j = i + 1; j < end; ++j) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubbleSort2(int *arr, int start, int end) {
    for (int i = start; i < end; ++i) {
        for (int j = start; j < end - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/*---------------------------------------quick sort---------------------------------------------*/
void selectionSort(int *arr, int start, int end) {
    for (int i = start; i < end; ++i) {
        int min = arr[i], location = i;
        for (int j = i + 1; j < end; ++j) {
            if (arr[j] < arr[i]) {
                min = arr[j];
                location = j;
            }
        }
        arr[location] = arr[i];
        arr[i] = min;
    }
}

/*---------------------------------------insert sort---------------------------------------------*/
void insertSort(int *arr, int start, int end) {
    for (int i = start + 1; i < end; ++i) {
        int j = i - 1;
        while (j >= start && arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            j --;
        }
    }
}

/*---------------------------------------merge sort---------------------------------------------*/
void merge(int *arr, int start, int end, int mid) {
    int i = start, j = mid, k = start, num[end];
    while (i < mid && j < end) {
        if (arr[i] < arr[j]) {
            num[k ++] = arr[i ++];
        } else {
            num[k ++] = arr[j ++];
        }
    }

    while (i < mid) {
        num[k ++] = arr[i ++];
    }

    while (j < end) {
        num[k ++] = arr[j ++];
    }

    i = start;
    while (i < k) {
        arr[i] = num[i];
        ++ i;
    }
}
void mergeSort(int *arr, int start, int end) {
    if (start + 1 < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid, end);
        merge(arr, start, end, mid);
    }
}
/*---------------------------------------merge sort---------------------------------------------*/
void max_heapify(int *arr, int i, int n) {
    int temp = arr[i];
    int j = 2 * i;
    while (j <= n) {
        if (j < n && arr[j + 1] > arr[j])
            j = j + 1;
        if (temp > arr[j]) {
            break;
        } else if (temp <= arr[j]) {
            arr[j / 2] = arr[j];
            j *= 2;
        }
    }

    arr[j / 2] = temp;
}

//begin with arr[1]
void heapSort(int *arr, int n) {
    for (int i = n; i > 1; --i) {
        int temp = arr[i];
        arr[i] = arr[1];
        arr[1] = temp;
        max_heapify(arr, 1, i - 1);
    }
}

void build_maxheap(int *arr, int n) {
    for (int i = n / 2; i > 0; --i)
        max_heapify(arr, i, n);
}
//int main() {
//    int n[10] = {9,8,7,6,5,4,3,2,1,0};
////    bubbleSort(n, 0, 10);
////    selectionSort(n, 0, 10);
////    insertSort(n,0,10);
////    mergeSort(n, 0, 10);
//    build_maxheap(n, 9);
//    heapSort(n, 9);
//    for (int i = 1; i <= 9; ++i)
//        cout << n[i] << endl;
//}
