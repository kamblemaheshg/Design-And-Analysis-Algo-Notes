// arry -  array is list of elements of the same type placed in contiguous memory location

public class Array_1{
    public static void main(String[] args) {
        int marks[] = new int[50];
        marks[49]=98;
        for (int i = 0; i < marks.length; i++) {
            System.out.println(isEmpty(marks[i]));
        }
    }

    private static boolean isEmpty(int i) {
        if(i>0){
            return true;
        }
        return false;
    }
}