public class Linear_Search {
    public static int linearSearch(int [ ] arr , int key){

        for(int i =0 ; i<arr.length ; i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {22,44,55,66,77,88,99};
        int key = 0;
        int idx = linearSearch(arr, key);
        System.out.println(idx);
    }
}
