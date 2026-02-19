/****** Balance Point of an Array  TC:O(N) SC: O(1)*******/
public class BalanceArray {
    public static void main(String[] args) {
        int[] arr = {1, 3, 5, 2, 2};
        
        int totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }

        int leftSum = 0;

        for (int i = 0; i < arr.length; i++) {
            totalSum -= arr[i]; // now totalSum becomes rightSum

            if (leftSum == totalSum) {
                System.out.println("Balance index: " + i);
            }

            leftSum += arr[i];
        }
    }
}
