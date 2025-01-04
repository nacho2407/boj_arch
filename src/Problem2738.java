import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.StringTokenizer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class Problem2738 {
    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st;
        int N, M, i, j, sum;
        String[][] A, B;
        OutputStreamWriter osw = new OutputStreamWriter(System.out);
        BufferedWriter bw = new BufferedWriter(osw);

        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        A = new String[N][M];
        B = new String[N][M];

        for(i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());

            for(j = 0; j < M; j++) {
                A[i][j] = st.nextToken();
            }
        }
        for(i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());

            for(j = 0; j < M; j++) {
                B[i][j] = st.nextToken();
            }
        }

        br.close();
        isr.close();

        sum = Integer.parseInt(A[0][0]) + Integer.parseInt(B[0][0]);
        bw.write(sum + "");
        for(j = 1; j < M; j++) {
            sum = Integer.parseInt(A[0][j]) + Integer.parseInt(B[0][j]);
            bw.write(" " + sum);
        }
        for(i = 1; i < N; i++) {
            bw.newLine();

            sum = Integer.parseInt(A[i][0]) + Integer.parseInt(B[i][0]);
            bw.write(sum + "");
            for(j = 1; j < M; j++) {
                sum = Integer.parseInt(A[i][j]) + Integer.parseInt(B[i][j]);
                bw.write(" " + sum);
            }
        }

        bw.flush();

        bw.close();
        osw.close();
    }
}
