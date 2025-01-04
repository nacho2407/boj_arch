import java.util.Scanner;

public class Problem10950 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        
        int n = sc.nextInt();
        sc.nextLine();

        for(int i = 0; i < n; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            sc.nextLine();
            
            System.out.println(a + b);
        }

        sc.close();
    }
}
