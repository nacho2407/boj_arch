import java.util.Scanner;

public class Problem2525 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int currentH = sc.nextInt();
        int currentM = sc.nextInt();
        sc.nextLine();
        int minutes = sc.nextInt();

        int h = currentH + minutes / 60;
        int m = currentM + minutes % 60;

        if(m > 59) {
            m -= 60;
            h++;
        }

        if(h > 23) {
            h -= 24;
        }

        System.out.println(h + " " + m);

        sc.close();
    }
}
