import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Problem14215 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        br.close();

        int sides[] = new int[3];
        for(int i = 0; i < sides.length; i++) {
            sides[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(sides);

        if(sides[0] + sides[1] <= sides[2]) {
            sides[2] = sides[0] + sides[1] - 1;
        }

        int round = 0;

        for(int i = 0; i < sides.length; i++) {
            round += sides[i];
        }

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(round + "");

        bw.flush();
        bw.close();
    }
}
