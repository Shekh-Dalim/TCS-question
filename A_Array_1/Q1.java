/***** Q: Sum of array element  ****/


/*-----------------  Using loop  TC-> O(n)  SC->(1) -----------------*/


import java.util.Scanner;

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

    public static int arraySum(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum = sum + arr[i];
        }
        return sum;
    }

    public static void main(String args[]) {
        System.out.print("Enter the size: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the array element: ");
        inputEle(arr, size);
        System.out.println("Display the array Element: ");
        printArr(arr, size);
        System.out.println("The sum of the array: ");
        int ans = arraySum(arr, size);
        System.out.println(ans);
    }
}

/*-------------- using Recurtion Relation  TC-> O(n)  SC->(n) -------------*/

import java.util.Scanner;

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

    public static int arraySum(int arr[], int size) {
        
        while( size == 0){
            return 0;
        }
        return arraySum(arr,size -1) +arr[size-1];
    }
   
    public static void main(String args[]) {
        System.out.print("Enter the size: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the array element: ");
        inputEle(arr, size);
        System.out.println("Display the array Element: ");
        printArr(arr, size);
        System.out.println("\nThe sum of the array: ");
        int ans = arraySum(arr, size);
        System.out.println(ans);
    }
}
