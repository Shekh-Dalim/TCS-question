/*************** Q:Meadian of an unsorted array TC- O(nlogn)  SC-O(1)*************/

/*
meadian of an unsorted array using c++
1: simple sort the array .
2: check the number of eleemnts present in the array is even or odd .
3: if odd then return mid value of the array .
4: else the meadin is the average of the two middle values .
*/




import java.util.*;
// import java.io.*;


class Dalim {
    static Scanner sc = new Scanner(System.in);

    public static void inputEle(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
    }

    public static void printArr(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static double Meadian(int arr[], int size) {

        Arrays.sort(arr);

        if (size == 0) {
            return 0;
        } else if (size % 2 == 1) {
            return arr[size / 2];
        } else {
            return (arr[size / 2] + arr[(size / 2) - 1]) / 2.0;
        }

    }

    public static void main(String args[]) {
        System.out.print("Enter the size: ");
        int size = sc.nextInt();
        int arr[] = new int[size];

        System.out.println("Enter the array element: ");
        inputEle(arr, size);

        System.out.println("Display the array Element: ");
        printArr(arr, size);

        double ans = Meadian(arr, size);
        System.out.println("\nThe mean of the array: "+ans);
    }
}
