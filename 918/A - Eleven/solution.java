import java.util.Scanner;
 
 
public class Eleven {
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
 
//        if (n<=0){
//            return;
//        } else {
//            long[] fibonacciSeries = new long[n];
//            fibonacciSeries[0] = 0;
//            if (n>1){
//                fibonacciSeries[1] = 1;
//            }
//            for (int i=2; i<n; i++){
//                fibonacciSeries[i] = fibonacciSeries[i-1] + fibonacciSeries[i-2];
//            }
//        }
//
 
        for (int i=1; i<=n; i++){
            if(i==1){
                System.out.print("O");
            } else if (isFibonacci(i)){
                System.out.print("O");
            } else {
                System.out.print('o');
            }
 
        }
    }
    public static boolean isPerfectSqure(int num){
        int sqrt = (int) Math.sqrt(num);
        return (sqrt * sqrt == num);
    }
 
    public static boolean isFibonacci(int n){
        int test1 = 5 * n * n + 4;
        int test2 = 5 * n * n - 4;
        return isPerfectSqure(test1) || isPerfectSqure(test2);
    }
 
 
}