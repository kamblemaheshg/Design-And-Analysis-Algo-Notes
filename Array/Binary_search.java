public  class Binary_search {
    public static int binarySearch(int arr [],int key) {
        int start = 0;
        int end = arr.length-1;
        int mid;
        while(start<=end){
            mid = (start+end)/2;
            if(arr[mid]==key){
                return mid;
            }
            if(arr[mid]<key){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {11,22,33,44,55,66,70,71,85,94,105,111};
        System.out.println(binarySearch(arr, 70));
    }
}
