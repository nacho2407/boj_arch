import java.util.Scanner;

public class Problem8393 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;

        int n = sc.nextInt();
        
        sc.close();

        for(int i = 1; i <= n; i++) {
            sum += i;
        }

        System.out.println(sum);
    }
}
