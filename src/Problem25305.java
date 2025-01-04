import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Problem25305 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int numbers[] = new int[Integer.parseInt(st.nextToken())];
        int k = numbers.length - Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());

        br.close();

        for(int i = 0; i < numbers.length; i++) {
            numbers[i] = Integer.parseInt(st.nextToken());
        }

        for(int i = 1; i < numbers.length; i++) {
            for(int j = i; j > 0 && numbers[j] < numbers[j - 1]; j--) {
                swap(numbers, j - 1, j);
            }
        }

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(numbers[k] + "");

        bw.close();
    }

    static void swap(int arr[], int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
