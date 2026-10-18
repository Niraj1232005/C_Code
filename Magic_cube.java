import java.util.Scanner;

class MagicCube {
    public static void main(String Args[]) {
        int n;
        int[][] ar;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter n:");
        n = sc.nextInt();
        ar = new int[n][n]; // Initialize the array with size n x n
        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ar[i][j] = sc.nextInt();
                 // Read elements into the array
            }
            sc.close();
        }
        // Now you have read the elements into the 2D array ar
        // You can do further processing with the array here
    }
}
