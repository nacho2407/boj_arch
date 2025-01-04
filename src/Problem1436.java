import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Problem1436 {
    public static void main(String[] args) throws Exception {
        final int THE_END = 666;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int count = Integer.parseInt(br.readLine());

        br.close();

        int numberingOfMovie = THE_END - 1;

        for(int i = 0; i < count;) {
            numberingOfMovie++;

            String tempString = Integer.toString(numberingOfMovie);

            if(tempString.contains("666")) {
                i++;
            }
        }

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(numberingOfMovie + "");

        bw.close();
    }
}
