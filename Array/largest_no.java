public class largest_no {
    public static int getLarg(int []num) {
        int temp = Integer.MIN_VALUE;
        for (int i = 0; i < num.length; i++) {
            if(temp<num[i]){
                temp=num[i];
            }
        }
        return temp;
    }
    public static void main(String[] args) {
        int num[]={11,2,5,7,6,8};
        System.out.println(getLarg(num));
    }
}
 