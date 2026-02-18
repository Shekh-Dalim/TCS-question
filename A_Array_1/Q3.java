/************ Q: Add Element to an array  TC-> O(n)  SC->O(n)*************/


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

    public static int[] addEle(int arr[],int size,int number){
        
        int newArr[] = new int[size+1];

        for(int i = 0; i < size; i++){
            newArr[i] =  arr[i];
        }
        newArr[size] = number;
        return newArr;

    }


    public static void main(String args[]) {
        System.out.print("Enter the size: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the array element: ");
        inputEle(arr, size);

        System.out.println("Display array before adding extra element: ");
        printArr(arr, size);

        System.out.println("\nEnter the extra element: ");
        int number = sc.nextInt();

        int ansArr[] = addEle(arr, size, number);
        System.out.println("Display array after adding extra element: ");
        printArr(ansArr, size+1);
        

    }
} 
