public class Max_Subarray_Sum {
    // private static int i;
    // private static int j;
    // Prefix_Sum_Array
    public static void prefuxSum(int arr[]) {
        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int prefix [] = new int[arr.length];
        prefix[0] = arr[0];
        for (int i = 1; i < arr.length; i++) {
            prefix[i]=prefix[i-1]+arr[i];
        }
        for (int i = 0; i < arr.length; i++) {
            for (int j = i; j < arr.length; j++) {
                currSum = i == 0  ? prefix[j] : prefix[j]-prefix[i-1];
                if(maxSum<currSum){
                    maxSum=currSum;
                }
            }
        }
        System.out.println("MaxSum "+maxSum);
    }
    public static void kDanzAlgo (int arr[]) {
        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            currSum = currSum+arr[i];
            if(currSum<0){
                currSum = 0;
            }
            maxSum = Math.max(maxSum, currSum);
        }
        System.out.println("Max sub array sum: "+maxSum);
        
    }
    public static void main(String[] args) {
        // System.out.println(Integer.MAX_VALUE);
        int arr[] = {1 , -2 , 6 ,-1 , 3};
        prefuxSum(arr); //O(n^2)
        kDanzAlgo(arr); // O(n)
    }
}
