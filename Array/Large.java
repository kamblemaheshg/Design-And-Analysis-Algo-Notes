public class Large {
    public static void getLargest(int [] arr){
        int small = Integer.MAX_VALUE;
        int larg = Integer.MIN_VALUE;
        for(int i = 0 ; i<arr.length ; i++){
            if(larg<arr[i]){
                larg = arr[i];
            }
            if(small>arr[i]){
                small = arr[i];
            }
        }
        System.out.println("Large El "+larg);
        System.out.println("Small El "+small);
    }
    public static void main(String[] args) {
        int arr[]={9,88,99,105,6,3,2,11,2,1};
        getLargest(arr);
    }
}
