public class Basic_Op_Array {
    public static void update(int marks[],int i,int value){
        marks[i]=value;
    }
    public static void main(String[] args) {
        int arr[] = {11,22,33,44,55,66,77,88,99};
        update(arr, 8, 66);
        System.out.println(arr[8]);
    }
}
