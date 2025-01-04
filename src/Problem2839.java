import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Problem2839 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int sugar = Integer.parseInt(br.readLine());

        br.close();

        int bags = -1;

        for(int i = (int) (sugar / 5); i >= 0; i--) {
            int restOfSugar = sugar - 5 * i;

            if(restOfSugar % 3 == 0) {
                if(bags == -1 || (bags != -1 && i + restOfSugar / 3 < bags)) {
                    bags = i + restOfSugar / 3;
                }
            }
        }

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(bags + "");

        bw.close();
    }
}
