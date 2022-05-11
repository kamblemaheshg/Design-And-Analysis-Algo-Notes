public class SecondLargest{
    static int getLarge(int arr[],int size){
        int large =0 ;
        for (int i = 0; i < size; i++) {
            if(arr[i]>arr[large]){
                large = i;
            }
        }
        return large;
    }
    static int getSecond(int arr[],int size){
        int large = getLarge(arr, size);
        int res = -1;
        for (int i = 0; i < size; i++) {
            if(arr[i]!=arr[large]){

                if(res ==- 1){
                    res=i;
                }
            else if(arr[i]>arr[res]){
                res = i;
            }
        }
        }
        return res;
        
    }
    public static void main(String[] args) {
        int arr[]={11,12,13,15,18};
        System.out.println(getSecond(arr, arr.length));
    }
}