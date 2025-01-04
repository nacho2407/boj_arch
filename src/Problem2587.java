import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Problem2587 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int numbers[] = new int[5];
        int average, median;

        int total = 0;

        for(int i = 0; i < numbers.length; i++) {
            numbers[i] = Integer.parseInt(br.readLine());
            total += numbers[i];
        }

        br.close();

        average = total / 5;

        for(int i = 1; i < numbers.length; i++) {
            for(int j = i; j > 0 && numbers[j] < numbers[j - 1]; j--) {
                swap(numbers, j - 1, j);
            }
        }

        median = numbers[2];

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(average + "\n" + median);

        bw.close();
    }

    static void swap(int arr[], int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
