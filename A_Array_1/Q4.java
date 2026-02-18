// /*************** Mean of Unsorted Array TC-> O(n)  SC->O(1)**************/



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

    public static int meanArray(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum = sum + arr[i];
        }
        int ans = sum / size;
        return ans;

    }

    public static void main(String args[]) {
        System.out.print("Enter the size: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the array element: ");
        inputEle(arr, size);

        System.out.println("Display array before adding extra element: ");
        printArr(arr, size);

        int ans = meanArray(arr, size);
        System.out.println("\nMean array is: " + ans);

    }
}
