/*********  Reverse an  Array********** */


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

    public static void reverseArray(int arr[], int size) {
        for(int i = size - 1; i>=0; i--){
            System.err.print(arr[i]);
            size--;
            if(size > 0){
                System.out.print(", ");
            }
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
        System.out.println("\nThe reverse of the array: ");
        reverseArray(arr, size);
    }
}
