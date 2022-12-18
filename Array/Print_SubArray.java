import java.util.Arrays;

public class Print_SubArray {
    public static void printSubArray(int arr []) {
        int ts =0; 
        int arr1[] = new int[15];
        int m = 0 , sum = 0 ;
        for (int i = 0; i < arr.length; i++) {
            int start = i;
            for (int j = i; j < arr.length; j++) {
                int end = j;
                for (int j2 = start; j2 <= end; j2++) {
                    sum=0;
                    System.out.print(arr[j2]+" ");
                    sum = sum+arr[j2];
                }
                arr1[m] = sum;
                m++;
                ts++;
                System.out.println();
            }
            System.out.println();
        }
        Arrays.sort(arr1);
        System.out.println(arr1[0]);
        System.out.println(arr1[arr1.length-1]);
        System.out.println(ts);
    }
    public static void main(String[] args) {
        int arr[] = {2,4,6,8,10};
        printSubArray(arr);
        // Subarry : a continues part of array
        // 2 >> 2,4 >> 2,4,6 >> 2,4,6,8
        // 4 >> 4,6 >> 4,6,8 >> 4,6,8
        // 6 >> 6,8 
        // 8
    }
}
