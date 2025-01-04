import java.util.Scanner;

public class Problem25304 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a, b;
        long sum = 0;

        long x = sc.nextLong();
        int n = sc.nextInt();

        for(int i = 0; i < n; i++) {
            a = sc.nextLong();
            b = sc.nextLong();

            sum += a * b;
        }
        
        sc.close();

        if(x == sum) {
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
    }
}
