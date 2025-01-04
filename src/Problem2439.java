import java.util.Scanner;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2439 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        int n = sc.nextInt();
        sc.close();

        for(int i = 1; i <= n; i++) {
            for(int k = 0; k < (n - i); k++) {
                bw.write(" ");
            }
            for(int j = 0; j < i; j++) {
                bw.write("*");
            }
            bw.write("\n");
        }

        bw.flush();

        bw.close();
        osw.close();
    }
}
